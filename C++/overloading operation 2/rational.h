#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>
using namespace std;
class rational{
    int numinator;
    int denominator;
    public:
    rational(){
        numinator = 0;
        denominator = 0;
    }
    rational(int n, int d){
        numinator = n;
        denominator = d;
    }
    const rational add(const rational& num);
    int getn();
    int getd();
    const rational operator+(const rational& num);
    const rational operator-(const rational& num);
    const rational operator*(const rational& num);
    const rational operator/(const rational& num);
    const rational operator%(const rational& num);
    friend ostream& operator<<(ostream& COUT,const rational& num);
    

};




















#endif