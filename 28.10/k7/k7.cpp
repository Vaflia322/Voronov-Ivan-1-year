#include <iostream>

using namespace std;

int main() {
	int i;
	for (i = 1000;i <= 9999;i++) {
		if (i / 1000 + (i / 100) % 10 + (i / 10) % 10 + i % 10 == 15) {
			cout << i << ' ';
		}
	}
	return 0;
}
