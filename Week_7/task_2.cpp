////////////////
//Task 2
//Matrices addition
////////////////

#include <iostream>
using namespace std;

int main()
{
    const int rows = 3, cols = 2;
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    
    //Input Matrix 1
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }
    
    //Input Matrix 2
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }
    
    //Print Matrix 1 + Matrix 2
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix1[i][j] + matrix2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
