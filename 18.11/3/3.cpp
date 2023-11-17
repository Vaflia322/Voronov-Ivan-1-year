#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int q;
	cin >> q;
	int* sumarr = new int[q];
	for (int i = 0; i < q; i++) {
		int a, b, sum = 0;
		cin >> a >> b;
		for (int j = a - 1; j <= b - 1; j++) {
			sum += arr[j];
		}
		sumarr[i] = sum;
	}
	for (int i = 0; i < q; i++) {
		cout << sumarr[i] << endl;
	}
	return 0;
}