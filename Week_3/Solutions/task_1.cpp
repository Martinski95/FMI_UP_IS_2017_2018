////////////////
//Task 1
//Days in a month
////////////////

#include <iostream>
using namespace std;

int main()
{
    int year, month, days;
    cout << "Въведете месец (1-12)\n";
    cin >> month;
    cout << "Въведете година\n";
    cin >> year;

    bool isLeap = (year % 4 == 0 && year % 100 != 0
                    || year % 400 == 0) ? true : false;

    // if-else implementation

    /*
    if (month == 1 || month == 3 || month == 5 || month == 7 
        || month == 8 || month ==10 || month == 12) {
        days = 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        if (isLeap) {
	    days = 29;
	} else {
	    days = 28;
	}
    }
    */

    // switch implementation

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31; break;
        case 4: case 6: case 9: case 11:
            days = 30; break;
        case 2:
            if (isLeap) {
		days = 29;
	    } else {
		days = 28;
	    }
    }

    cout << "Month " << month << " has " << days << " days.\n";

    return 0;
}
