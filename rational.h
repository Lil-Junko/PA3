#ifndef RATIONAL_H
#define RATIONAL_H

#include <cmath>
#include <iostream>
#include <string>
using namespace std;


class Rational
{
private:
    int mA;
    int mB;

public:
    Rational();
    Rational(int a, int b);
    Rational(string value);
    friend ostream& operator<<(ostream& os, const Rational& r);
    operator double();
    Rational operator+(const Rational& a);
    Rational operator-(const Rational& a);
    Rational operator*(const Rational& a);
    Rational operator/(const Rational& a);
    void reduce();
};



#endif // RATIONAL_H_INCLUDED
