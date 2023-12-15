#include <iostream>

using namespace std;

int main() {
	int arr[4][4];
	int sumachisel = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = rand() % 91 + 10;
			sumachisel += arr[i][j];
		}
	}
	int min_sum = sumachisel;
	for (int i = 0; i < 4; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << ' ';
			sum += arr[i][j];
		}
		cout << sum << ' ';
		cout << endl;
		min_sum = min(sum, min_sum);
	}
	for (int i = 0; i < 4; i++) {
		int suma = 0;
		for (int j = 0; j < 4; j++) {
			suma += arr[i][j];
		}
		if (suma == min_sum) {
			cout << "The smallest sum in series number " << i+1;
		}
	}
	return 0;
}