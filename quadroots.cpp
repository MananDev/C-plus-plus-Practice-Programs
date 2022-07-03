#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x, y, discriminant, real, imaginary;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x = (-b + sqrt(discriminant)) / (2*a);
        y = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x = -b/(2*a);
        cout << "x = y =" << x << endl;
    }

    else {
        real = -b/(2*a);
        imaginary =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x = " << real << "+" << imaginary << "i" << endl;
        cout << "y = " << real << "-" << imaginary << "i" << endl;
    }
}