#include <iostream>
#include <random>

#include "Neuron.h"
#include "NeuralNetwork.h"
#include "helpers.h"

using namespace helpers;

int main()
{

    // int inputLayerSize = 1;
    // int outPutLayerSize = 1;

    NeuralNetwork NeuralNet;

    NeuralNet.initializeLayers();

    std::vector<float> myNumbers = {1.23,
                                    0.43,
                                    1};
    NeuralNet.predict(myNumbers);

    return 0;
}