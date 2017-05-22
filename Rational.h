#include <iostream>

using namespace std;

class Rational {
  private:
    int num;
    int den;
    int gcd(int n, int d);
    void reduce();
  public:
    Rational();
    Rational(int n);
    Rational(int x, int y);
    friend Rational add(const Rational& r1, const Rational& r2);
    friend Rational sub(const Rational& r1, const Rational& r2);
    friend Rational mul(const Rational& r1, const Rational& r2);
    friend Rational div(const Rational& r1, const Rational& r2);
    friend Rational operator - (const Rational& r1, const Rational& r2);
    friend Rational operator * (const Rational& r1, const Rational& r2);
    friend Rational operator + (const Rational & r1, const Rational & r2);
    friend Rational operator / (const Rational & r1, const Rational & r2);
    friend bool operator == (const Rational & r1, const Rational & r2);
    friend bool operator < (const Rational & r1, const Rational & r2);
    friend bool operator <= (const Rational & r1, const Rational & r2);
    friend bool operator > (const Rational & r1, const Rational & r2);
    friend bool operator >= (const Rational & r1, const Rational & r2);
    friend bool less(const Rational& r1, const Rational& r2);
    friend Rational neg(const Rational& r1);
    friend ostream& operator <<(ostream& out, const Rational& r);
    friend istream& operator >>(istream& in, Rational& r);
};
