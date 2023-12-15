#include <iostream>

using namespace std;

int* createArray(int& size) {
	int* arr = new int[size];
	for (int i = 0; i < size;i++) {
		cin >> arr[i];
	}
	return arr;
}

int* reversArray(int* arr, int& size) {
	int* revers_array = new int[size];
	for (int i = 0; i < size;i++) {
		revers_array[i] = arr[size - i - 1];
	}
	return revers_array;
}

int main() {
	int size; cin >> size;
	int* array = new int[size];
	array = createArray(size);
	array = reversArray(array, size);
	for (int i = 0; i < size;i++) {
		cout << array[i] << ' ';
	}
	delete array;
	return 0;
}