/*********************************************************************
** Author: Joshua Hesseltine
** Date: 28 Feb 2015
** Description: Fraction.hpp
*********************************************************************/
#ifndef FRACTION_HPP
#define FRACTION_HPP
class Fraction;
class Fraction
{
public:
    //constructor
    Fraction(int n, int d);
    //deconstructor - already implemented
    ~Fraction(){}
    //overloaded operators
    //fields
    int numerator;
    int denominator;
    //methods
    void setNumerator(int value);
    void setDenominator (int value);
    Fraction operator*(const Fraction& f);
    Fraction operator/(const Fraction& d);
    friend std::ostream& operator<<(std::ostream& stream, const Fraction& d);
};



#endif // FRACTION_HPP
