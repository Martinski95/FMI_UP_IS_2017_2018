////////////////
//Task 2
//Print numbers from 1 to N
////////////////

#include <iostream>
using namespace std;

int main()
{
    int endNumber;
    cout << "Въведете число (> 1)\n";
    cin >> endNumber;

    int i = 1;
    while (i <= endNumber) {
        cout << i << " ";
        i += 1;
    }

    cout << endl;

    return 0;
}
