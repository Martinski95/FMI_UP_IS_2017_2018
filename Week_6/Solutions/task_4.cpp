////////////////
//Task 4
//Array - reverse
////////////////

#include <iostream>
using namespace std;

int main()
{
    const int size = 11;
    int arr[size];

    
    cout << "Enter " << size << " numbers.";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0, j = size-1; i < size/2; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
