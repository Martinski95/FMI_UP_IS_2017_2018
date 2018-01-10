#include <iostream>
using namespace std;

bool isIncreasing(double array[], int count)
{
    if (count <= 1) 
        return true;
    
    if (array[0] >= array[1]) 
        return false;
    
    return isIncreasing(array + 1, count - 1);
}


int main() {
	double arr[] = {1.5, 2.0, 3.14, 5};
    
    cout << boolalpha << "Is increasing = " << isIncreasing(arr, 4) << endl;

	system("PAUSE");
	return 0;
}