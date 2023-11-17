#include <iostream>
#include <complex>

using namespace std;

int root3(int number) {
	double y1 = number, y;
	y = 0.5 * (y1 + 3 * number / (2 * pow(y1, 2) + number / y1));
	while (abs(y1 - y) >= pow(10, -5)) {
		y = y1;
		y1 = 0.5 * (y + 3 * number / (2 * pow(y, 2) + number / y));
		cout << y1 << ' ' << y<< endl;
	}
	cout << y;
	return 0;
}
int main() {
	int x;
	cin >> x;
	root3(x);
}

