////////////////
//Task 5
//Function - isEven
////////////////

#include <iostream>
using namespace std;

int isEven(int n) {
    return (n % 2 == 0);
}

int main() {
    cout << boolalpha << isEven(4) << endl;
    cout << isEven(13) << endl;
    
    return 0;
}