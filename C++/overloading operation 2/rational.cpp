#include "rational.h"
#include <iostream>

const rational rational::add(const rational& num){
    int n = this->numinator * num.denominator + this->denominator * num.numinator;
    int d = this->denominator * num.denominator;
    return rational(n,d);
}
int rational::getn(){
    return this->numinator;
}
int rational::getd(){
    return this->denominator;
}
const rational rational::operator+(const rational& num){
    rational result;
    result.numinator = this->numinator * num.denominator + this->denominator * num.numinator;
    result.denominator = this->denominator * num.denominator;
    return result;
}
ostream& operator<<(ostream& COUT,const rational& num){
   COUT << num.numinator << ",";
   COUT << num.denominator;
   return COUT;
}

const rational rational::operator*(const rational& num){
    rational result;
    result.numinator = this->numinator * num.numinator;
    result.denominator = this->denominator * num.denominator;
    return result;
}
const rational rational::operator/(const rational& num){
    rational result;
    result.numinator = this->numinator * num.denominator;
    result.denominator = this->denominator * num.numinator;
    return result;
}
const rational rational::operator-(const rational& num){
    rational result;
    result.numinator = this->numinator * num.denominator - this->denominator * num.numinator;
    result.denominator = this->denominator * num.denominator;
    return result;
}
const rational rational::operator%(const rational& num){
    int n = this->numinator * num.denominator;
    int d = this->denominator * num.numinator;
    
    return (rational(fmod(n,d), fmod(n,d)));
}




