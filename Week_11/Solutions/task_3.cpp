#include <iostream>
using namespace std;

int addNumbers(int n)
{
    if(n != 0)
        return n + addNumbers(n-1);
    else
        return n;
}


int main() {
	int number;
	
	cout << "Enter a positive integer: ";
	cin >> number;
	cout << " sum from 1 to " << number << " = " << addNumbers(number) << endl;
    
    system("PAUSE");
    return 0;
}