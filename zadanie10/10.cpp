#include <iostream>

using namespace std;

int main() {
    int arr[5];
    for (int i = 0;i < 5;i++) {
        cin >> arr[i];
    }
    for (int k = 1;k < 5;k++) {
        if (arr[k] > arr[k - 1]) {
            cout << arr[k]<<' ';
        }
    }
    return 0;
}