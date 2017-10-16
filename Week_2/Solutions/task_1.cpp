////////////////
//Task 1
//Body Mass Index Calculator
////////////////


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double weigth_in_kg, height_in_m;
    
    cout << "Въведете тегло в килограми\n";
    cin >> weigth_in_kg;
    cout << "Въведете височина в сантиметри\n";
    cin >> height_in_m;
    
    double BMI = weigth_in_kg / pow(height_in_m, 2.0);
    
    if (BMI < 15.0) {
        cout << "Тежко недохранване\n";
    } else if (BMI < 18.5) {
        cout << "Недохранване\n";
    } else if (BMI < 25) {
        cout << "Нормално тегло\n";
    } else {
        cout << "Наднормено тегло\n";
    }
    
    return 0;
}
