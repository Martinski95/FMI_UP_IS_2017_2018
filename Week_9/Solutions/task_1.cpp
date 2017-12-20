#include <iostream>
using namespace std;

double average(double numbers[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }
    return sum / size;
}
int main() {
    const int SIZE = 3;
    double arr[SIZE] = {1,2,3};
    
    cout << average(arr, SIZE);
}