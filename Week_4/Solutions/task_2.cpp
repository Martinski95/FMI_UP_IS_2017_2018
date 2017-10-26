////////////////
//Task 2
//Check if number is prime
////////////////

#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a positive integer: ";
    cin >> num;

    bool isPrime = true;
    for(int i = 2; i < num; ++i) {
        if(num % i == 0)  {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << "This is a prime number";
    } else {
        cout << "This is not a prime number";
    }
    
    return 0;
}

