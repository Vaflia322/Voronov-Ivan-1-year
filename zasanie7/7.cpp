#include <iostream>

using namespace std;

int main() {
    int arr[5],countp = 0;
    for (int i = 0; i < 5; i++) {
    cin >> arr[i];
    }
    for (int x = 0;x < 5;x++) {
        if (arr[x] > 0) {
            countp += 1;
        }
    }
    cout << countp;
    return 0;
}