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
	cout << "������� ������ �������" << endl;
	int n; cin >> n;
	double* arr = createArr(n);
	cout << "������� �������� �������" << endl;
	arr = completeArr(arr, n);
	cout << "�������� �������: ";
	outputArr(arr, n);
	deleteArr(arr);
	cout << endl << "������ �������";
	int flag;
	cout << endl << "���� �� ������� ������� ��� ���� ������ ������� 1 ����� 0" << endl;
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
