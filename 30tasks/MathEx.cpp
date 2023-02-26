#include "MathEx.h"
#include <cmath>

double MathEx::R(double&a, double&b)
{
    return 3 * pow(a, 2) + 3 * pow(b, 5) + 4.9;
}

double MathEx::K(double&a, double&b)
{
    return log10(pow(a, 2) + pow(b, 3)) + exp(a);
}

double MathEx::G(double&a, double&b)
{
    return a * (b + 3.5) + sqrt(b);
}

double MathEx::D(double&a, double&b)
{
    return 9.8 * pow(a, 2) + 5.52 * cos(pow(b, 5));
}

double MathEx::L(double&a, double&b)
{
    return 1.51 * cos(pow(a, 2)) + 2 * pow(b, 3);
}

double MathEx::M(double&a, double&b)
{
    return cos(2 * a) + 3.6 * exp(b);
}

double MathEx::N(double&a)
{
    return pow(a, 2) + 2.8 * fabs(a) + 0.55;
}

double MathEx::T(double&a)
{
    return sqrt(fabs(6 * pow(a, 2) - 0.1 * a + 4));
}

double MathEx::V(double&a, double&b)
{
    return log10(a + 0.95) + sin(pow(b, 4));
}

double MathEx::U(double&a, double&b, double&c)
{
    return exp(a) + 7.355 * pow(b, 2) + pow(sin(c), 2);
}

double MathEx::S(double&a, double&b)
{
    return 9.756 * pow(b, 7) + 2 * tan(a);
}

double MathEx::K1(double&a, double&b)
{
    return 7 * pow(b, 2) + 3 * sin(pow(a, 3)) + 9.2;
}

double MathEx::E(double&a)
{
    return sqrt(fabs(3 * pow(a, 2) + 0.5 * a + 4));
}

double MathEx::M1(double&a, double&b)
{
    return sqrt(pow(sin(b + 6.835), 2)) + exp(a);
}

double MathEx::H(double&a)
{
    return sin(pow(a, 2)) - 2.8 * a + sqrt(fabs(a));
}

double MathEx::S1(double&a)
{
    return sqrt(cos(4 * pow(a, 2)) + 7.151);
}

double MathEx::N1(double&a)
{
    return 3 * pow(a, 2) + sqrt(a + 1);
}

double MathEx::Z(double&a)
{
    return 3 * pow(a, 2) + sqrt(pow(a, 3) + 1);
}

double MathEx::N2(double&a, double&b, double&c)
{
    return b * sqrt(pow(a, 3) + 1.09 * c);
}

double MathEx::U1(double&a, double&b, double&c)
{
    return exp(c + a) + tan(b) * sqrt(a);
}

double MathEx::P(double&a, double&b)
{
    return exp(a + 5.5) + 9.1 * pow(b, 3);
}

double MathEx::T(double&a, double&b, double&c)
{
    return sin(2 * c) * log10(2 * pow(a, 2) + sqrt(b));
}

double MathEx::P1(double&a, double&b)
{
    return exp(2 * a) + sin(b);
}

double MathEx::F(double&a)
{
    return 2 * sin(0.214 * pow(a, 5) + 1);
}

double MathEx::P2(double&a, double&b)
{
    return exp(2 * a) + sin(pow(b, 2));
}

double MathEx::Z1(double&a)
{
    return sin(pow((pow(a, 2) + 0.4), 3));
}

double MathEx::W(double&a, double&b, double&c)
{
    return 1.03 * c + exp(2 * a) + tan(fabs(b));
}

double MathEx::T1(double&a, double&b)
{
    return exp(a + b) + sqrt(fabs(6.4 * a));
}

double MathEx::N3(double&a)
{
    return 3 * pow(a, 2) + sqrt(fabs(a + 1));
}

double MathEx::W1(double&a, double&b)
{
    return exp(a + b) + 7.2 * sin(b);
}
