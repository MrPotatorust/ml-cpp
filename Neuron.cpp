#include <string>
#include <iostream>
#include "Neuron.h"

class Neuron {
    public:
        int id;
        int weight;
        
        void display() {
            std::cout << "Neuron ID: " << id << ", Weight: " << weight << std::endl;
        }

};