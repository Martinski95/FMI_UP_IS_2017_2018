#include <iostream>
using namespace std;

void toUpperCase(char str[]) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
	}
}

int main() {
	char str[] = "Hello, World!";
	cout << str << endl;
	toUpperCase(str);
	cout << str << endl;

	system("PAUSE");
	return 0;
}