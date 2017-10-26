////////////////
//Task 1
//Check if number
//is a palindrome
////////////////

#include <iostream>
using namespace std;

int main() {
    int num, digit, num_copy, rev = 0;

    cout << "Enter a positive number: ";
    cin >> num;

    num_copy = num;

    do {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    cout << "The reverse of the number is: " << rev << endl;

    if (num_copy == rev) {
        cout << "The number is a palindrome\n";
    } else {
        cout << "The number is not a palindrome\n";
    }
    
    return 0;
}
