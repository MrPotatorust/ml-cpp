#include <string>
#include <iostream>
#include "Neuron.h"

Neuron::Neuron(int id, int weight) {
    this->id = id;
    this->weight = weight;
};

void Neuron::display() {
    std::cout << "Neuron ID: " << id << ", Weight: " << weight << std::endl;
};