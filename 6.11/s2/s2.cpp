#include <iostream>

using namespace std;

int kolvo(int number) {
	int suma = 0;
	for (int i = 1;i < 10;i++) {
		for (int k = 0;k < 10;k++) {
			for (int l = 0;l < 10;l++) {
				if (i+k+l == number) {
					suma += 1;
				}
			}
		}
	}
	cout << suma;
	return 0;
}

int main() {
	int n; cin >> n;
	kolvo(n);
	return 0;
}