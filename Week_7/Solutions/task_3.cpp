////////////////
//Task 3
//Matrices multiplication
////////////////

#include <iostream>
using namespace std;

int main() {
    const int rows1 = 2, cols1 = 3;
    const int rows2 = 3, cols2 = 1;
    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int result_matrix[rows1][cols2] = {0};
    
    //Input Matrix 1
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }
    
    //Input Matrix 2
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }
    
    //Multiply Matrices
    for(int i = 0; i < rows1; ++i) {
        for(int j = 0; j < cols2; ++j) {
            for(int k = 0; k < cols1; ++k) {
                result_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    //Print Result Matrix
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << result_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
