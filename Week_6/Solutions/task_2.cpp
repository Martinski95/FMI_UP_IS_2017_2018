////////////////
//Task 2
//Array - search
//number larger 
//or equal to N
////////////////

#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int arr[size];
    int compare_val = 100;
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 100) {
            count++;
        }
    }
    cout << "Count :" << count << endl;

    return 0;
}
