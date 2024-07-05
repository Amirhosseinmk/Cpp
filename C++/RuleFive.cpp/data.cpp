#include "data.h"
Data :: Data(){
    name = nullptr;
    id = 0;
    age = 0.0;
}
Data :: Data(char* name,int id, double age){
    this->id = id;
    this->age = age;
    name = new char[strlen(name) + 1];  //Address : AASS00
    strcpy(this->name,name);
}
Data::Data(const Data& data){    //copy Constructor
    id = data.id;
    age = data.age;
    name = new char[strlen(data.name)+1]; //Address : FFSS22
    strcpy(name,data.name);
}
Data& Data :: operator=(const Data& data){ //Copy Assignment
    if(&data != this){ 
    id = data.id;
    age = data.age;
    delete[] name;
    name = new char[strlen(data.name) + 1];
    strcpy(name,data.name);
    }
    return *this;
}
Data :: Data(Data&& data)noexcept{ // Move constructor
    id = data.id;
    age = data.age;
    name = data.name;
    name = nullptr;
    id = 0;
    age = 0.0;
}
Data& Data :: operator=(Data&& data)noexcept{ // MOve assignment
    id = data.id;
    age = data.age;
    delete[] name;
    name = data.name;
    name = nullptr;
    id = 0;
    age = 0.0;

}