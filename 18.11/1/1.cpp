#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	int* arr = new int[a];
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
	}
	int mxsum = 0, cursum = 0;
	for (int i = 0; i < a; i++) {
		cursum = max(arr[i], arr[i] + cursum);
		mxsum = max(mxsum, cursum);
	}
	cout << mxsum;
	return 0;
}
