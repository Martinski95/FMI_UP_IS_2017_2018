////////////////
//Task 1
//swap variables function
////////////////

#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Before swap - num1 = " << num2 << ", num2 = " << num2 << endl;
    swap(&num1, &num2);
    cout << "After swap - num1 = " << num2 << ", num2 = " << num2 << endl;
}
