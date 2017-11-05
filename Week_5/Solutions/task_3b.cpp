////////////////
//Task 3b
//Print diamond
////////////////

#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << ("Enter number of rows: ");
    cin >> rows;

    int spaces = rows - 1, stars = 1;

    for(int i=1; i <= 2*rows-1; i++) {
        for(int space=1; space <= spaces; space++) {
            cout << " ";
        }
        for(int star=1; star <= 2*stars - 1; star++) {
            cout << "*";
        }
        if (i < rows) {
            spaces--;
            stars++;
        } else {
            spaces++;
            stars--;
        }
        cout << endl;
    }
    return 0;
}
