#include <iostream>
using namespace std;

void substring(const char *str, int start, int length, char *res)
{
	for (int i = 0; i < length && str[i] != '\0'; i++)
		res[i] = str[start + i];
	res[length] = '\0';
}


int main() {
	const int SIZE = 100;
	char str[] = "Hello, World!";
	char res[SIZE] = "";
	cout << str << endl;
	substring(str, 2, 4, res);
	cout << res << endl;

	system("PAUSE");
	return 0;
}