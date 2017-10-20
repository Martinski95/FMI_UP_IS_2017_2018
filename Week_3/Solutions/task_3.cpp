////////////////
//Task 1
//Sum from 1 to N
////////////////


#include <iostream>
using namespace std;

int main()
{
    int endNumber, sum = 0;
    cout << "Въведете число (> 1)\n";
    cin >> endNumber;

    int i = 1;
    while (i <= endNumber) {
        sum += i;
        i += 1;
    }

    cout << "Сумата от 1 до " << endNumber << " e " << sum << endl;

    return 0;
}
