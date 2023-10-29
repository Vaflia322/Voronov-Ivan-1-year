#include <iostream>
using namespace std;

int main() {
    int maxn, minn, arr[5];
    
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
    cout << maxn - minn;
    return 0;
}