#include <iostream>
using namespace std;

void encode(char str[], const int X) {
	for(int i = 0; str[i] != '\0'; i++) {
		str[i] = str[i]	+ X;
	}
}

int main() {
	char str[] = "Hello";
	cout << str << endl;
	encode(str, 5);
	cout << str << endl;

	system("PAUSE");
	return 0;
}