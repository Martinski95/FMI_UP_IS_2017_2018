#include <iostream>
using namespace std;

void circleShift(int* arr, int size) {
    int temp = *(arr + size - 1);
    for (int j = size-1; j > 0; j--) {
        *(arr + j) = *(arr + j - 1);
    }
    *arr = temp;
}

void circleShiftStep(int* arr, int size, int step) {
    if (step >= size) {
        return;
    }
    for (int i = 0; i < step; i++) {
        circleShift(arr, size);
    }
}

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    
    circleShiftStep(arr, SIZE, 3);
    
    for (int i = 0; i < SIZE; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}