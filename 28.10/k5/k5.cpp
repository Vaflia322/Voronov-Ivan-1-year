#include <iostream>

using namespace std;

int main() {
	int count, prover,suma = 0;
	cin >> count;
	while (count > 1) {
		prover = count % 10;
		if (prover % 2 == 0){
			suma += 1;
		}
		count = count / 10;
	}
	cout << suma;
	return 0;
}