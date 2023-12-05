#include "rational.h"

Rational::Rational()
{
    mA = 1; mB = 1;
}

Rational::Rational(int a, int b)
{
    mA = a; mB = b;
}

Rational::Rational(string value)
{
    string a, b;
    a = value.substr(0, value.find("/"));
    mA = stoi(a);
    b = value.erase(0, value.find("/")+1);
    mB = stoi(b);
}

Rational::operator double()
{
    double d = mA/(double)mB;
    return d;
}

Rational Rational::operator+(const Rational& a)
{
    Rational r;
    double temp = mA/(double)mB;
    double temp1 = a.mA/(double)a.mB;

    temp+=temp1;

    bool run = true;
    int i = 1;
    while (run)
    {
        if (fmod((temp*i),1.0) == 0.0)
        {
            run = false;
            r.mA = temp * i;
            r.mB = i;
        }
        i++;
    }
    return r;
}

Rational Rational::operator-(const Rational& a)
{
    Rational r;
    double temp = mA/(double)mB;
    double temp1 = a.mA/(double)a.mB;

    temp-=temp1;

    bool run = true;
    int i = 1;
    while (run)
    {
        if (fmod((temp*i),1.0) == 0.0)
        {
            run = false;
            r.mA = temp * i;
            r.mB = i;
        }
        i++;
    }
    return r;
}

Rational Rational::operator*(const Rational& a)
{
    Rational r;
    double temp = mA/(double)mB;
    double temp1 = a.mA/(double)a.mB;

    temp*=temp1;

    bool run = true;
    int i = 1;
    while (run)
    {
        if (fmod((temp*i),1.0) == 0.0)
        {
            run = false;
            r.mA = temp * i;
            r.mB = i;
        }
        i++;
    }
    return r;
}

Rational Rational::operator/(const Rational& a)
{
    Rational r;
    double temp = mA/(double)mB;
    double temp1 = a.mA/(double)a.mB;

    temp/=temp1;

    bool run = true;
    int i = 1;
    while (run)
    {
        if (fmod((temp*i),1.0) == 0.0)
        {
            run = false;
            r.mA = temp * i;
            r.mB = i;
        }
        i++;
    }
    return r;
}

void Rational::reduce()
{
    double temp = mA/(double)mB;
    bool run = true;
    int i = 1;
    while (run)
    {
        if (fmod((temp*i),1.0) == 0.0)
        {
            run = false;
            mA = temp * i;
            mB = i;
        }
        i++;
    }

}

ostream& operator<<(ostream& os, const Rational& r)
{
    os << r.mA << '/' << r.mB;
    return os;
}
