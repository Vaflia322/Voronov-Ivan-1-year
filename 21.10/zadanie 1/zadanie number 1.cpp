#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int count;
	cin >> count;
	cout << "������� �����" << ' ' << max(count / 10, count % 10) << ' ' << "������� �����" << ' ' << min(count / 10, count % 10);
}