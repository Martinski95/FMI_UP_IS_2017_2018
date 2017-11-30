////////////////
//Task 2
//print array function
////////////////

#include <iostream>
using namespace std;

void printArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 5;
    
    int arr[SIZE] = {1, 2, 3, 4, 5};
    
    printArr(arr, SIZE);
}
