#include <iostream>

using namespace std;

int main() {
	int count, c1, c2, c3;
	cin >> count;
	c1 = count / 100;
	c2 = (count / 10) % 10;
	c3 = count % 10;
	cout << c1 * c2 * c3;
	return 0;
}