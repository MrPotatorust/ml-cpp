#include <string>
#include <iostream>
#include "Neuron.h"

Neuron::Neuron(int weight)
{
    this->weight = weight;
};

void Neuron::display()
{
    std::cout << "Weight : " << weight << std::endl;
};