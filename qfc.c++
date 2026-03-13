#include <iostream>
#include <cmath>
#include <complex>

int main() {
    using std::cout;
    using std::cin;
    using std::abs;

    double a, b, c;
    
    cout << "Enter coefficients a, b, and c for the quadratic equation ax^2 + bx + c = 0: \n";
    
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    double disc = b*b - 4*a*c;

    if (a == 0){
        double root1 = (-c)/b;

        cout << "The root is " << root1 << "\n";
    }


    else if (disc >= 0){
        double root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
        double root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);

        cout << "The roots are " << root1 << " and " << root2 << "\n";
    }

    else {
        double real = -b/(2*a);
        double disc = abs(b*b - 4*a*c);
        double i = (sqrt(disc))/(2*a);
        std::complex<double> root1(real,abs(i));
        std::complex<double> root2(real,-abs(i));

        cout << "The roots are " << root1.real() << " + " << root1.imag() << "i and " << root1.real() << " - " << root1.imag() << "i\n";
    }



return 0;

}