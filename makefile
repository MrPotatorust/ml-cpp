compile:
	hipcc main.cpp Neuron.cpp NeuralNetwork.cpp helpers.cpp MatrixCalculations.cpp -o main -I/opt/rocm/include -std=c++23 -Wall -Wextra -Wconversion -Wpedantic