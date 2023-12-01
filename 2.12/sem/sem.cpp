#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main() {
	int k, maxel = 0; cin >> k;
	int* arr = new int[k];
	for (int i = 0;i < k;i++) {
		cin >> arr[i];
		maxel = max(arr[i], maxel);
	}
	vector <int> arrprost;
	arrprost.push_back(2);
	int len_arrprost = 0;
	for (int l = 2; l<= 163841;l++) {
		int flag = 0;
		for (int h = 2;h <= floor(sqrt(l));h++) {
			if (l % h == 0 and flag==0) {
				flag++;
			}
			if (flag == 1) {
				break;
			}
		}
		if (flag == 0) {
			arrprost.push_back(l);
			len_arrprost++;
			if (len_arrprost > maxel) {
				break;
			}
		}
	}
	for (int i = 0; i < k; i++) {
		cout << endl << arrprost[arr[i]];
	}
}