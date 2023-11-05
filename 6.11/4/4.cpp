#include <iostream>
#include <math.h>

using namespace std;

double scet(int number) {
	double result = 2;
	for (int i = 2;i <= number;i++) {
		result = 1 + 1 / result;
	}
	cout << result;
	return result;
}

int main() {
	int n;
	cin >> n;
	scet(n);
}