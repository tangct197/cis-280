#include "Rational.h"
#include <math.h>

//Constructors for the Rational Object
Rational::Rational(){
  num = 0;
  den = 1;
}

Rational::Rational(int n){
  num = n;
  den = 1;
}

Rational::Rational(int x, int y){
  num = x;
  den = y;
  reduce();
}

Rational add(const Rational& r1, const Rational& r2){
  return Rational(r1.num * r2.den + r1.den * r2.num, abs(r1.den * r2.den));
}

Rational sub(const Rational& r1, const Rational& r2){
  return Rational(r1.num * r2.den - r2.num * r1.den, r1.den * r2.den);
}

Rational mul(const Rational& r1, const Rational& r2){
  return Rational(r1.num * r2.num, r1.den * r2.den);
}

Rational div(const Rational& r1, const Rational& r2){
  return Rational(r1.num * r2.den, r1.den * r2.num);
}

Rational operator-(const Rational& r1, const Rational& r2){
  return sub(r1, r2);
}

Rational operator*(const Rational& r1, const Rational& r2){
  return mul(r1, r2);
}

Rational operator+(const Rational& r1, const Rational& r2){
  return add(r1, r2);
}

Rational operator/(const Rational& r1, const Rational& r2){
  return div(r1, r2);
}

bool operator == (const Rational & r1, const Rational & r2){
  return (r1.num * r2.den) == (r1.den * r2.num);
}

bool operator < (const Rational & r1, const Rational & r2){
  return (r1.num * r2.den) < (r2.num * r1.den);
}

bool operator <= (const Rational & r1, const Rational & r2){
  return ((r1 < r2) || (r1 == r2));
}

bool operator > (const Rational & r1, const Rational & r2){
  return (r1.num * r2.den) > (r2.num * r1.den);
}

bool operator >= (const Rational & r1, const Rational & r2){
  return ((r1 > r2) || (r1 == r2));
}

bool less(const Rational& r1, const Rational& r2){
  return (r1.num * r2.den) < (r2.num * r1.den);
}

Rational neg(const Rational& r){
  return Rational(r.num * -1, r.den);
}

int Rational::gcd(int n, int d){
  if (n == 0){
    return n;
  }else{
    while(d != 0){
      if (n > d){
        n = n - d;
      }else{
        d = d - n;
      }
    }
  }
  return n;
}

void Rational::reduce(){
  bool numNeg = abs(num) != num;
	bool denNeg = abs(den) != den;
  int n = abs(num);
  int d = abs(den);
  int divisor = gcd(n, d);
  n /= divisor;
  d /= divisor;
  if((numNeg && (!denNeg)) || ((!numNeg) && denNeg)){
    n *= -1;
  }
  this->num = n;
  this->den = d;
}

ostream& operator <<(ostream& out, const Rational& r){
  out << r.num << "/" << r.den;
  return out;
}

istream& operator >>(istream& in, Rational& r){
  char temp;
  in >> r.num >> temp >> r.den;
  return in;
}
