////////////////
//Task 3
//Array - change 
//value for X with -1
////////////////

#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int arr[size];
    int x;
    int compare_val = 100;
    int count = 0;
    cout << "Enter value for X: ";
    cin >> x;
    
    cout << "Enter " << size << " numbers.";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            arr[i] = -1;
        }
    }
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
