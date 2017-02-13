/*********************************************************************
** Author: Joshua Hesseltine
** Date: 28 Feb 2015
** Description: Fraction.cpp
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include "Fraction.hpp"

using namespace std;

Fraction::Fraction(int n, int d)
{
    setNumerator(n);
    try
    {
        setDenominator(d);
    }
    catch (int e )
        {
            cout << "\nDivide by zero - not allowed! \nExiting the program!" << endl;
            exit(0);
        }
}
Fraction Fraction::operator*(const Fraction& f)
{
    return Fraction(numerator * f.numerator, denominator * f.denominator);
}
Fraction Fraction::operator/(const Fraction& f)
{
    return Fraction(numerator * f.denominator, denominator * f.numerator);
}
ostream& operator<<(std::ostream& stream, const Fraction& f)
{
    stream << f.numerator << "/" << f.denominator << endl;
    return stream;
}
void Fraction::setNumerator(int value)
{
    numerator = value;
}
void Fraction::setDenominator (int value)
{
    if (value == 0)
        throw 10;
    denominator = value;
}

int main()
{
    cout << "please input numerator and denominator of a fraction separated by a space" << endl;
    int n,d;
    cin >> n >> d ;
    Fraction f1(n,d);
    cout << "please input again: numerator and denominator of a fraction separated by a space" << endl;
    cin >> n >> d ;
    Fraction f2(n,d);
    cout << "Do you want to multiply or divide? Enter 'M' or 'D'" << endl;
    char in;
    cin >> in;
    if ((in == 'M') | (in == 'm'))
    {
        Fraction f3 = f1.operator*(f2);
        cout << f3;
    }

    if ((in == 'D') | (in == 'd'))
    {
        Fraction f3 = f1.operator/(f2);
        cout << f3;
    }

    return 0;
}
