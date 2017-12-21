#include <iostream>
using namespace std;

bool isLetter(const char c) {
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

char toLower(const char c) {
	return (c <= 'Z') ? c + ('a' - 'A') : c;
}

void NewLineWords(const char* str) {
	int count = 0;
	bool word = false;
	while (str[count] != '\0') {
		if (isLetter(str[count])) {
			cout << toLower(str[count]);
			word = false;
		}
		else {
			if (word == false) {
				cout << endl;
				word = true;
			}
		}
		count++;
	}
}


int main() {
	char str[] = "Hello darknss, my old friend.";
	NewLineWords(str);

	system("PAUSE");
	return 0;
}