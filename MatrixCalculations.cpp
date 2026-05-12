#include <chrono>
#include <functional>
#include "MatrixCalculations.h"
#include <hip/hip_runtime.h>

namespace matrixCalcs
{
    __global__ void add(float *a, )
    {
        
    }

    int calculateWithThreads(std::size_t totalElementCount, std::size_t threadCount, const std::vector<float> &matrixesFirst, const std::vector<float> &matrixesSecond, std::vector<float> &matrixesResult)
    {
        if (threadCount == 0)
        {
            return 1;
        }

        std::vector<std::thread> threads;

        std::size_t indexStep = totalElementCount / threadCount;

        for (std::size_t i = 0; i < totalElementCount; i += indexStep)
        {
            std::size_t end = i + indexStep - 1;
            threads.emplace_back(calculateLoop,
                                 i,
                                 end,
                                 std::ref(matrixesFirst),
                                 std::ref(matrixesSecond),
                                 std::ref(matrixesResult));
        }

        for (auto &thread : threads)
        {
            if (thread.joinable())
            {
                thread.join();
            }
        }
        return 0;
    }

    int calculateGPU()
    {

        return 0;
    }

    int calculateLoop(int startIndex, int endIndex, const std::vector<float> &matrixesFirst, const std::vector<float> &matrixesSecond, std::vector<float> &matrixesResult)
    {
        for (int i = startIndex; i < endIndex; i++)
        {
            matrixesResult[i] = matrixesFirst[i] + matrixesSecond[i];
        }

        return 0;
    }

    void calculateMatrix()
    {
        // auto initStart = std::chrono::steady_clock::now();

        // std::random_device rd;
        // std::mt19937 gen(rd());
        // std::uniform_real_distribution<float> randFloat(-999.0f, 999.0f);

        // std::size_t threadCount = 0;
        // const std::size_t matrixCount = 350;
        // const std::size_t matrixSize = 1000; // It will be always square shaped for now
        // const std::size_t totalElementCount = matrixCount * matrixSize * matrixSize;
        // std::vector<float> matrixesFirst(totalElementCount);
        // std::vector<float> matrixesSecond(totalElementCount);
        // std::vector<float> matrixesResult(totalElementCount);

        // for (auto &matrixElement : matrixesFirst)
        // {
        //     matrixElement = randFloat(gen);
        // }

        // for (auto &matrixElement : matrixesSecond)
        // {
        //     matrixElement = randFloat(gen);
        // }

        // auto initEnd = std::chrono::steady_clock::now();
        // auto initDuration = std::chrono::duration_cast<std::chrono::milliseconds>(initEnd - initStart);
        // std::cout << "Initialization duration: " << initDuration.count() << '\n';

        // auto calculationStart = std::chrono::steady_clock::now();

        calculateGPU();
        // if (threadCount != 0)
        // {
        //     calculateWithThreads(totalElementCount, threadCount, matrixesFirst, matrixesSecond, matrixesResult);
        // }
        // else
        // {
        //     calculateLoop(0, totalElementCount, matrixesFirst, matrixesSecond, matrixesResult);
        // }

        // auto calculationEnd = std::chrono::steady_clock::now();
        // auto calculationDuration = std::chrono::duration_cast<std::chrono::milliseconds>(calculationEnd - calculationStart);
        // std::cout << "Finished calculation: " << calculationDuration.count() << '\n';

        // std::cout << "First: ";
        // std::cout << matrixesFirst[0] << '\n';
        // std::cout << "Second: ";

        // std::cout << matrixesSecond[0] << '\n';
        // std::cout << "Result: ";
        // std::cout << matrixesResult[0] << '\n';
    }
}