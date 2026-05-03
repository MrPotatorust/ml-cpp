#include <fstream>

#include "TrainingData.h"

TrainingData::TrainingData(std::string fileType, std::string path)
{
}

void TrainingData::refreshDataFromFile(std::string path = "")
{
    if (path.length() != 0)
    {
        this->path = path;
    }

    
}

void 