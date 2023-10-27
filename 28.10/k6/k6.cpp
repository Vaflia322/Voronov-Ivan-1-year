#include <iostream>

using namespace std;

int main() {
	int n,mxnumber,proverka;
	mxnumber = 0;
	cin >> n;
	while (n > 1) {
		proverka = n % 10;
		if (mxnumber < proverka) {
			mxnumber = proverka;
		}
		n = n / 10;
	}
	cout << mxnumber;
	return 0;
}