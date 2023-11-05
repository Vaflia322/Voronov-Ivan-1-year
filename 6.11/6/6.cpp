#include <iostream>

using namespace std;

int sostav(int number) {
	int proverka = 0;
	for (int i = 2; i < number;i++) {
		if (number % i == 0 and proverka==0) {
			cout << "Number " << number << " sostavnoe";
			proverka += 1;
		}
	}
	if (proverka == 0) {
		cout << "Number " << number << " ne sostavnoe";
	}
	return proverka;
}



int main() {
	int n;
	cin >> n;
	sostav(n);
	return 0;
}