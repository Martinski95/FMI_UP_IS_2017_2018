#include <iostream>
using namespace std;

void returnDigits(int number){
    if (number < 10){
        cout << number;
    } else {
        cout << number % 10;
	returnDigits(number / 10);
    }
    
    cout << number % 10;
}


int main() {
    int number;
	
    cout << "Enter a number: ";
    cin >> number;
    returnDigits(number);
    
    system("PAUSE");
    return 0;
}
