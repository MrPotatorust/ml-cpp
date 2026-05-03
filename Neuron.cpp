#include "Neuron.h"

Neuron::Neuron()
{
    this->weights = {};
    this->bias = 0.0f;
}

Neuron::Neuron(std::vector<float> weights, float bias)
{
    this->weights = weights;
    this->bias = bias;
}