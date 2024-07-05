#ifndef DATA_H
#define DATA_H
#include <iostream>
class Data{
    char* name;
    int id;
    double age;
    public:
    Data();
    Data(char* name,int id,double age);
    Data(const Data& data); //Copy Constructor
    Data& operator=(const Data& data); //Copy Assignment
    Data(Data&& data)noexcept; // move constructor
    Data& operator=(Data&& house)noexcept; // move assignment
    operator std::string() const;

};

















#endif