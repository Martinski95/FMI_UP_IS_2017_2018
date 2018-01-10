#include <iostream>
using namespace std;

int fib(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fib(n-1) + fib(n-2);
}


int main() {
    int number;
	
    cout << "Enter a positive integer: ";
    cin >> number;
    cout << number << " fibonacci = " << fib(number) << endl;
    
    system("PAUSE");
    return 0;
}
