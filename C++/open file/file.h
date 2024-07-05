#ifndef FILE_H
#define FILE_H
#include <iostream>
#include <fstream>
#define DAYS 31
class AWSsystem{
    int temperature[DAYS];
    float humidity[DAYS];
    float rainfall[DAYS];
    AWSsystem();
    AWSsystem(const std::string& file);
    float findMaxTemp()const;
    float findMinTemp()const;
    float averageHumidity();
};









#endif