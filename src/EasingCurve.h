#pragma once

/** Funkcja  ci�g�a, maj�ca warto�ci w przedziale <0; 1>. W punkcie 0 ma warto�� 0, w punkcie 1 ma warto�� 1. */
class EasingCurve
{
public:
    // my�l�, �e nie trzeba robi� na template'ach, nie trzeba u�ywa� tu klas
    typedef float (*UnaryFunctionType)(float);
    EasingCurve(UnaryFunctionType function);
    virtual ~EasingCurve();

    float operator()(float x) const;

private:
    UnaryFunctionType function;
};

extern EasingCurve Line;
extern EasingCurve Parabola;
extern EasingCurve ShrinkedSin;
