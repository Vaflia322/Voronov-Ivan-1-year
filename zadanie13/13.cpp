#include <iostream>

using namespace std;

int main() {
    int arr[5], stop = 0;
    for (int i = 0;i < 5;i++) {
        cin >> arr[i];
    }
    for (int x = 0;x < 5;x++) {
        for (int k = x; k < 5;k++) {
            if (arr[x] == arr[k] and x != k and stop == 0) {
                cout << "YES";
                stop += 1;
                break;
            }
        }
    }
    if (stop == 0) {
        cout << "NO";
    }
    return 0;
}