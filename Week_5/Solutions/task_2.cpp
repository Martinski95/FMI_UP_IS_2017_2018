////////////////
//Task 2
//Print multiplication
//table for N between 5 and 20
////////////////

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;

    //Input validation
    do {
        cout << "Еnter a value for n between 5 and 20: ";
        cin >> n;
    } while (n < 5 || n > 20);

    //Printing the table
    for (int row=1; row<=n; row++) {
        for (int column=1; column<=n; column++) {
            cout << setw(4) << row*column;
        }
        cout << endl;
    }
}
