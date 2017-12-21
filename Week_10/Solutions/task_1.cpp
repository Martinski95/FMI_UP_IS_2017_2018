#include <iostream>
using namespace std;

void toLowerCase(char str[]) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
	}
}

int main() {
	char str[] = "Hello, World!";
	cout << str << endl;
	toLowerCase(str);
	cout << str << endl;

	system("PAUSE");
	return 0;
}