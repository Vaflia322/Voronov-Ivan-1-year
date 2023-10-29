#include <iostream>
using namespace std;

int main() {
    int maxn, minn, arr[5],stop1 = 0, stop2 = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    maxn = arr[1];
    minn = arr[1];

    for (int x = 0;x < 5;x++) {
        if (maxn < arr[x]) {
            maxn = arr[x];
        }
        if (minn > arr[x]) {
            minn = arr[x];
        }
    }
    
    for (int z = 0;z < 5;z++) {
        if (arr[z] == maxn and stop1 < 1) {
            arr[z] = minn;
            stop1 += 1;
        }
        if (arr[z] == minn and stop2 < 1) {
            arr[z] = maxn;
            stop2 += 1;
        }
    }
    for (int k = 0;k < 5;k++) {
        cout << arr[k] << ',';
    }
    return 0;
}