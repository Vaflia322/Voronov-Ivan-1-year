#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n, k, suma = 0;
	cin >> n >> k;
	for (int i = 0; i <= n; i++) {
		suma += pow(i, k);
	}
	cout << suma;
}