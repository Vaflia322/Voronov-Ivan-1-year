#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int s1,s2;
	cin >> s1 >> s2;
	int* a1 = new int[s1];
	int* a2 = new int[s2];
	int s_ob = s1 + s2;
	int s_per = min(s1, s2);
	int s_raz12 = s1;
	int s_raz21 = s2;
	int* ob = new int[s_ob];
	int* per = new int[s_per];
	int* raz12 = new int[s_raz12];
	int* raz21 = new int[s_raz21];
	for (int i = 0;i < s1;i++) {
		cin >> a1[i];
	}
	for (int i = 0;i < s2;i++) {
		cin >> a2[i];
	}
	for (int i = 0;i < s_ob;i++) {
		ob[s_ob] = 0;
	}
	for (int i = 0;i < s_per;i++) {
		per[s_per] = 0;
	}

	//объединение
	int m1 = 0;
	int m2 = 0;
	for (int k = 0; k < s1;k++) {
		ob[k] = a1[m1];
		for (m1 = 0; m1 < s1;m1++) {
		}
	}
	for (int k = 0; k < s_ob;k++) {
		ob[k + s1] = a2[m2];
		for (int m2 = 0; m2 < s2;m2++) {
		}
		sort(ob, ob + s_ob);
	}

	for (int v = 0; v < s_ob;v++) {
		cout << ob[v] << ' ';
	}
}