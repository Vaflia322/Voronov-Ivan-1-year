#include <iostream>

using namespace std;

bool check(int** array_adjacency, int n) {
	int* arr_che�k = new int[n];
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			if (array_adjacency[i][k] == 1) {
				for (int j = 0;j < count;j++) {
					if (i == arr_che�k[j]) {
						delete[] arr_che�k;
						return true;
					}
				}
				arr_che�k[count] = i;
				i = k;
				count++;
			}
		}
	}
	delete[] arr_che�k;
	return false;
}

int main() {
	int n;cin >> n;

	int** array = new int*[n];
	for (int i = 0; i < n;i++) {
		array[i] = new int[n];
	}

	for (int i = 0; i < n;i++) {
		for (int k = 0; k < n; k++) {
			cin >> array[i][k];
		}
	}
	
	if (check(array, n)) {
		cout << "graph contains a cycle";
	}
	else {
		cout << "graph does not contain a cycle";
	}
	return 0;
}