#include <iostream>

using namespace std;

int main() {
	int array[10];
	int mn; mn = 50;
	for (int& n : array) {
		n = rand() % 101 - 50;
		mn = min(mn,n);
		cout << n << ' ';
	}
	cout << endl<< mn;
	delete array;
	return 0;
}