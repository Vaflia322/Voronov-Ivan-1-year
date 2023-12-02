#include <iostream>
using namespace std;
double* createArr(int n) {
	double* array = new double[n];
	return array;
}

double* completeArr(double* array, int n) {
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	return array;
}

double* outputArr(double* array, int n) {
	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
	return 0;
}

double* deleteArr(double* array) {
	delete[] array;
	return 0;
}

int massiv() {
	setlocale(LC_ALL, "RU");
	cout << "¬ведите размер массива" << endl;
	int n; cin >> n;
	double* arr = createArr(n);
	cout << "¬ведите элементы массива" << endl;
	arr = completeArr(arr, n);
	cout << "Ёлементы массива: ";
	outputArr(arr, n);
	deleteArr(arr);
	cout << endl << "ѕам€ть очищена";
	int flag;
	cout << endl << "≈сли вы желаете создать еще один массив введите 1 иначе 0" << endl;
	cin >> flag;
	if (flag == 0) {
		return 0;
	}
	if (flag == 1) {
		return massiv();
	}
}

int main() {
	massiv();
	return 0;
}
