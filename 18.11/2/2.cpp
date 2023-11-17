#include <iostream>
using namespace std;
int main() {
	int N, M;
	cin >> N >> M;
	int vert = N - 1; int gor = M - 1, nod = 0;
	for (int i = 1; i <= min(gor, vert); i++) {
		if (gor % i == 0 and vert % i == 0) {
			nod = i;
		}
	}
	cout << vert + gor - nod;
	return 0;
}