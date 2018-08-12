#include <iostream>
using namespace std;

char n1[8], n2[8];
int ma, mi;

int main() {
	cin >> n1 >> n2;
	for (int i = 0; n1[i] != '\0'; i++) if (n1[i] == '5') n1[i] = '6';
	for (int i = 0; n2[i] != '\0'; i++) if (n2[i] == '5') n2[i] = '6';
	ma = atoi(n1) + atoi(n2);
	for (int i = 0; n1[i] != '\0'; i++) if (n1[i] == '6') n1[i] = '5';
	for (int i = 0; n2[i] != '\0'; i++) if (n2[i] == '6') n2[i] = '5';
	mi = atoi(n1) + atoi(n2);
	cout << mi << " " << ma;
	return 0;
}