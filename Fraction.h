//
// Created by Ivan on 25.09.2020.
//
#include <iostream>

#ifndef CLION_FRACTION_H
#define CLION_FRACTION_H


class Fraction{
private:
    int a{}, b{};
public:
    Fraction();
    Fraction(const Fraction &);
    explicit Fraction(int a);
    Fraction(int a, int b);
    void output() const;
    friend std::ostream & operator << (std::ostream &, const Fraction &);
    friend std::istream & operator << (std::istream &, const Fraction &);
};


#endif //CLION_FRACTION_H
