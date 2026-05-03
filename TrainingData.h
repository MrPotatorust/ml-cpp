#include <string>
#include <vector>

#pragma once

class TrainingData
{
public:
    std::string fileType;
    std::string path;

    std::vector<std::string> colNames;

    TrainingData(std::string fileType, std::string path);

    void reloadDataFromFile(std::string path);

private:
    void refreshInternalState();
};