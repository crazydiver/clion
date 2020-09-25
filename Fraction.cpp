//
// Created by Ivan on 25.09.2020.
//
#include <iostream>
#include "Fraction.h"

inline float sqr(float x) {return x*x;}

Fraction::Fraction() {
    a = 0;
    b = 1;
}

int nod(int x, int y){
    if (y == 0)
        return x;
    return nod(y, x % y);
}


void Contraction(int &numerator, int &denominator) {
    int tmp = nod(numerator,denominator);
    numerator /= tmp; //числитель
    denominator /= tmp; //знаменатель
}

Fraction::Fraction(int i1, int i2) {
    Contraction(i1, i2);
    a = i1;
    b = i2;
}

Fraction::Fraction(int i1) {
    a = i1;
    b = 1;
}

void Fraction::output() const {
    if (b == 1){
        std::cout << a << std::endl;
    } else {
        std::cout << a << '/' << b << std::endl;
    }
}

Fraction::Fraction(const Fraction &fr) {
    a = fr.a;
    b = fr.b;
}

std::ostream &operator<<(std::ostream & out, const Fraction & fr) {
    if (fr.b == 1){
        out << fr.a;
    } else {
        out << fr.a << '/' << fr.b;
    }
    return out;
}




std::istream &operator>>(std::istream &in, Fraction &fr) {
	int i1, i2;
	in >> i1 >> i2;
	Contraction(i1, i2);
	fr.a = i1;
	fr.b = i2;
	return in;
}
