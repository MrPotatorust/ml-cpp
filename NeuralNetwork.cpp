#include "NeuralNetwork.h"

void NeuralNetwork::predict(){

};


void NeuralNetwork::setOutputLayerSize(int outputLayerSize){
    this->outputLayerSize = outputLayerSize;
}


void NeuralNetwork::setInputLayerSize(int inputLayerSize){
    this->inputLayerSize = inputLayerSize;
}

void NeuralNetwork::initializeLayers(int layerCount, int neuronsPerLayer){
   
}

void NeuralNetwork::setNeurons(NeuronGrid neurons){
    this->neurons = neurons;
}