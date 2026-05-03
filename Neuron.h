#include <vector>

#pragma once

class Neuron
{
public:
    std::vector<float> weights;
    float bias;
    Neuron();
    Neuron(std::vector<float> weights, float bias);
};