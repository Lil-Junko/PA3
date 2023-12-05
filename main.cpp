/**
 * @file main.cpp
 * @author Nolan Meyer
 * @brief 
 * @version 0.1
 * @date 2022-09-14
 * 
 */
#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
    Rational num0;
    cout <<"num0 = "<<num0<<endl;

    Rational num1(12,16);
    cout <<"num1 = "<<num1<<endl;

    Rational num2;
    num2=num1;//assignment
    cout <<"num2 = "<<num2<<endl;
    cout<<"num2 as a decimal = "<<static_cast<double>(num2)<<endl;//type conversion operator

    Rational num3 = num2;//initialization
    cout <<"num3 = "<<num3<<endl;

    num3.reduce();
    cout <<"Reduced num3 = "<<num3<<endl;

    Rational num4("3/-4");//Convert Constructor
    cout <<"num4 = "<<num4<<endl;
    num4.reduce();
    cout <<"Reduced num4 = "<<num4<<endl;

    double num5=num4;//type conversion operator
    cout <<"num5 = "<<num5<<endl;

    num1={3,7};//initialization list
    cout <<"num1 = "<<num1<<endl;

    cout <<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
    cout <<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
    cout <<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
    cout <<"("<<num1<<") / ("<<num2<<") = "<<num1/num2<<endl;
    cout <<num3<<" + "<<num1<<"*"<<num2<<" = "<<num3+num1*num2<<endl;
    return 0;
}
