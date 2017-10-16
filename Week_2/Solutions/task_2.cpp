////////////////
//Task 2
//Quadratic Equation Calculator
////////////////

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    double discriminant, x1, x2;
    
    cout << "Въведете коефициенти а*x^2 + b*x + c ...\n";
    cin >> a >> b >> c;
    
    discriminant = pow(b, 2.0) - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Две решения: " <<
              "x1 = " << x1 << " и " <<
              "x2 = " << x2 << endl;
    } else if (discriminant == 0) {
        x1 = -b / (2*a);
        cout << "Едно решение: " <<
              "x1 = x2 = " << x1 << endl;
    } else {
        cout << "Няма реални корени." << endl;
    }
    return 0;
}
