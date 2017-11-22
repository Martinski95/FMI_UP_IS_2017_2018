////////////////
//Task 6
//Function - isPrime
////////////////

#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int n) {
    if(n <= 1)
        return false;
    else if(n == 2)
        return true;
    else 
        for(int i = 2; i <= n / 2; ++i) {
            if(n % i == 0)
                return false;
        }
    
    return true;
}

int main() {
    cout << boolalpha << isPrime(4) << endl;
    cout << isPrime(13) << endl;
    cout << isPrime(1) << endl;
    
    return 0;
}