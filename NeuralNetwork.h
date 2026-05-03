#include "Neuron.h"

#pragma once

using NeuronGrid = std::vector<std::vector<Neuron>>;

class NeuralNetwork
{

public:
    int outputLayerSize;
    int inputLayerSize;
    NeuronGrid neurons;

    void predict(std::vector<float> input);
    void train(int epochs);
    void setNeurons(NeuronGrid neurons);
    void initializeLayers();
};