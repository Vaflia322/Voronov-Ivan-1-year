#include <iostream>
#include <math.h>

using namespace std;

int krazizn(int number, int quantity){
	int result = 0, l = 0;
	for (int i = 0;i < 1000;i++) {
		if (pow(10, i) > number) {
			l = i - 1;
			break;
		}
	}
	while (quantity>0){
		result *= 10;
		result += number / int(pow(10, l));
		number = number % int(pow(10, l));
		quantity -=1;
		l -= 1;
	}
	cout << result;
	return 0;
}

int main() {
	int n, k;
	cin >> n >> k;
	krazizn(n, k);
}