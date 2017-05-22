#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
        cout << "Testing declarations" << endl;
        cout << "Rational x, y(2), z(-5,-6), w(1,-3);" << endl;
        Rational x, y(2), z(-5,-6), w(1,-3);
        cout << "x = " << x << ", y = " << y << ", z = " << z
             << ", w = " << w << endl;
        cout << "Enter "
             << "a fraction in the format "
             << "integer_numerator/integer_denominator"
             << endl;
        cin >> x;
        cout << "You entered the equivalent of: " << x << endl;
        cout << z << " - (" << w << ") = " << z - w << endl;
        cout << "Testing the constructor and normalization routines: " << endl;
        y =Rational(-128, -48);
        cout << "y =Rational(-128, -48) outputs as " << y << endl;
        y =Rational(-128, 48);
        cout << "y =Rational(-128, 48)outputs as " << y << endl;
        y = Rational(128,-48);
        cout << "y = Rational(128, -48) outputs as " << y << endl;
        Rational a(1,1);
        cout << "Rational a(1,1); a outputs as: " << a << endl;
        Rational ww = y*a;
        cout << y << " * " << a << " = " << ww << endl;
        w = Rational(25,9);
        z = Rational(3,5);

        cout << "Testing arithmetic and relational "
             << " operator overloading" << endl;
        cout << w << " mul " << z << " = " << mul(w, z) << endl;
        cout << w << " add " << z << " = " << add(w, z) << endl;
        cout << w << " sub " << z << " = " << sub(w, z) << endl;
        cout << w << " div " << z << " = " << div(w, z) << endl;
        cout << w << " less " << z << " = " << less(w, z) << endl;
        cout << w << " less " << w << " = " << less(w, w) << endl;

        w = Rational(-21,9);
        z = Rational(3,5);
        cout << w << " mul " << z << " = " << mul(w, z) << endl;
        cout << w << " add " << z << " = " << add(w, z) << endl;
        cout << w << " sub " << z << " = " << sub(w, z) << endl;
        cout << w << " div " << z << " = " << div(w, z) << endl;
        cout << w << " less " << z << " = " << less(w, z) << endl;
        cout << w << " less " << w << " = " << less(w, w) << endl;

        cout << neg(w) << " neg " << " = " << neg(neg(w)) << endl;
        cout << w << " neg " << " = " << neg(w) << endl;
        return 0;
}
