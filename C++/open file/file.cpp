#include "file.h"

AWSsystem::AWSsystem(){
    for(int i = 0; i < DAYSs; i++){
        temperature[i] = 0;
        humidity[i] = 0;
        rainfall[i] = 0;
    }
}
AWSsystem::AWSsystem(const std::string& file){
    
    std::ifstream data (file);  //open a file and save all info into data variable
    if(!data.is_open()){
        std::cout << "file is not able to be opened" << std::endl;
    }
    int i = 0;
    std::string line;
    while(getline(data,line) && i < 30){
        int pos = 0;
        pos = line.find(':');
        std::string temp = line.substr(pos+1);
        pos = temp.find(',');
        this->temperature[i] = stoi(temp.substr(0,pos));
        temp = temp.substr(pos + 1);
        pos = temp.find(',');
        this->humidity[i] = stof(temp.substr(0,pos));
        temp = temp.substr(pos + 1);
        pos = temp.find(',');
        temp = temp.substr(pos + 1);
        this->rainfall[i] = stof(temp);
        i++;
    }
}
float AWSsystem::findMaxTemp()const{
    float max = 0.0;
    for(int i = 0; i < DAYS;i++){
        if(this->temperature[i] > max){
            max = this->temperature[i];
        }
    }
    return max;
}
float AWSsystem::findMinTemp()const{
    float min = this->temperature[0];
    for(int i = 0; i < DAYS; i++){
        if(this->temperature[i] < min){
            min = temperature[i];
        }
    }
    return min;
}
float AWSsystem::averageHumidity(){
    float sum = 0.0;
    for(int i = 0; i < DAYS; i++){
        sum += humidity[i];
    }
    return sum/(float)DAYS;
}