#include <iostream>
using namespace std;

int factorial(int n) {
	if(n <= 1) 
        return 1;

	return n * factorial(n - 1);
}


int main() {
	int number;
	
	cout << "Enter a positive integer: ";
	cin >> number;
	cout << number << "! = " << factorial(number) << endl;

	system("PAUSE");
	return 0;
}