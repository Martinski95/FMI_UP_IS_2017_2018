////////////////
//Task 3
//input array function
////////////////

#include <iostream>
using namespace std;

void inputArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }
}

void printArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}


int main() {
    const int SIZE = 5;
    
    int arr[SIZE];
    
    inputArr(arr, SIZE);
    
    printArr(arr, SIZE);
}
