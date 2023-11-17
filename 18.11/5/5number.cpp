#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n;i++) {
		cin >> arr[i];
	}
	int otvet = arr[0];
	for (int k = 0; k < n;k++) {
		otvet = min(otvet, arr[k]);
	}
	cout << otvet;
}