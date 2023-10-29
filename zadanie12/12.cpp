#include <iostream>

using namespace std;

int main() {
    int arr[5], count = 1,maxposl = 1;
    for (int i = 0;i < 5;i++) {
        cin >> arr[i];
    }
    for (int k = 1;k < 5;k++) {
        if (arr[k] == arr[k - 1]) {
            count += 1;
            maxposl = max(count, maxposl);
        }
        if (arr[k] != arr[k - 1]) {
            count = 1;
        }
    }
    cout << maxposl;
    return 0;
}