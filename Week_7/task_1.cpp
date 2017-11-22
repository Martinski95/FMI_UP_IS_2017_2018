////////////////
//Task 1
//Input/output array
////////////////

#include <iostream>
using namespace std;

int main()
{
    const int rows = 3, cols = 2;
    int arr[rows][cols];

    //Input
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    //Print
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
