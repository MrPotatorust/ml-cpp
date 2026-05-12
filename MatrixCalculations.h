#include <vector>
#include <thread>
#include <random>
#include <iostream>

#pragma once

namespace matrixCalcs
{
    int calculateWithThreads(std::size_t totalElementCount, std::size_t threadCount, const std::vector<float> &matrixesFirst, const std::vector<float> &matrixesSecond, std::vector<float> &matrixesResult);

    int calculateGPU();

    int calculateLoop(int startIndex, int endIndex, const std::vector<float> &matrixesFirst, const std::vector<float> &matrixesSecond, std::vector<float> &matrixesResult);

    void calculateMatrix();
}
