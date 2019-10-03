#include <iostream>

class Fraction
{
private:
    int m_numerator;
    int m_denominator;
public:
    Fraction(int numerator=0, int denominator=1): m_numerator(numerator), m_denominator(denominator) { }
    ~Fraction() {
        reduce();
     }
};