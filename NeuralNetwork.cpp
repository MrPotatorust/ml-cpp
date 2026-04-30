#include <random>
#include <iostream>

#include "NeuralNetwork.h"

using namespace std;

void NeuralNetwork::predict()
{
}

void NeuralNetwork::setOutputLayerSize(int outputLayerSize)
{
    this->outputLayerSize = outputLayerSize;
}

void NeuralNetwork::setInputLayerSize(int inputLayerSize)
{
    this->inputLayerSize = inputLayerSize;
}

void NeuralNetwork::initializeLayers()
{
    std::random_device rd;
    std::uniform_real_distribution<float> weight(0, 1);

    int layers = 2;
    int neuronsPerLayer = 2;

    vector<vector<Neuron>> newVectors(3, vector<Neuron>(4, 0));

    this->neurons = newVectors;

    for (int i = 0; i < layers; i++)
    {
        for (int x = 0; x < neuronsPerLayer; x++)
        {
            this->neurons[i][x].weight = weight(rd);
        }
    }
}

void NeuralNetwork::setNeurons(NeuronGrid neurons)
{
    this->neurons = neurons;
}