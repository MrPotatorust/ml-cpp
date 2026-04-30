#include "Neuron.h"
#include <vector>

#pragma once

using NeuronGrid = std::vector<std::vector<Neuron>>;

class NeuralNetwork {

    public:
        int outputLayerSize;
        int inputLayerSize;
        NeuronGrid neurons;

        NeuralNetwork();
        void predict();
        void setOutputLayerSize(int outputLayerSize);
        void setInputLayerSize(int inputLayerSize);
        void setNeurons(NeuronGrid neurons);
        void NeuralNetwork::initializeLayers(int layerCount, int neuronsPerLayer);
    };