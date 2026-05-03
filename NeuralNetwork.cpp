#include <random>
#include <iostream>
#include <vector>

#include "NeuralNetwork.h"

void NeuralNetwork::predict(std::vector<float> input)
{
    if(input.size() < 1){
        
    }
    std::vector<float> layerInputs = input;

    for (const std::vector<Neuron> &layer : this->neurons)
    {
        std::vector<float> newOutputs;

        for (const Neuron &neuron : layer)
        {
            float sum = neuron.bias;
            for (size_t i = 0; i < neuron.weights.size() && i < layerInputs.size(); ++i)
            {
                sum += neuron.weights[i] * layerInputs[i];
            }
            newOutputs.push_back(sum);
        }

        layerInputs = newOutputs;
    }

    // Print final outputs for now
    std::cout << "Output:";
    for (float v : layerInputs)
        std::cout << ' ' << v;
    std::cout << std::endl;
}

void NeuralNetwork::initializeLayers()
{
    std::random_device rd;
    std::uniform_real_distribution<float> weight(0, 1);

    int layers = 2;
    int neuronsPerLayer = 2;
    int weightCount = neuronsPerLayer;

    NeuronGrid newNeurons(layers, std::vector<Neuron>(neuronsPerLayer));

    for (int i = 0; i < layers; i++)
    {

        for (int x = 0; x < neuronsPerLayer; x++)
        {
            std::vector<float> w;
            for (int k = 0; k < weightCount; k++)
                w.push_back(weight(rd));

            newNeurons[i][x].weights = w;
            newNeurons[i][x].bias = weight(rd);
        }
    }

    this->neurons = newNeurons;
}

void NeuralNetwork::train(int epochs)
{
}

// This function is kind of broken
void NeuralNetwork::setNeurons(NeuronGrid neurons)
{
    this->neurons = neurons;
}
