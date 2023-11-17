#include <iostream>
using namespace std;

int main() {
	int len; cin >> len;
	int* arr = new int[len];
	for (int i = 0;i < len;i++) {
		cin >> arr[i];
	}
	int suma_m_elementov_massiva = 0;
	cout << "m = " << endl;
	int dlina_podmasiva; cin >> dlina_podmasiva;
	int prom_suma = 0;
	for (int k = 0; k <= len - dlina_podmasiva;k++) {
		int m = dlina_podmasiva;
		prom_suma = 0;
		while (m > 0) {
			prom_suma += arr[k + m - 1];
			m--;
		}
		suma_m_elementov_massiva = max(prom_suma, suma_m_elementov_massiva);
		prom_suma = 0;
	}
	cout << suma_m_elementov_massiva;
}