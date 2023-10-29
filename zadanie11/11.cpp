#include <iostream>

using namespace std;

int main() {
    int arr[5], mingran,maxgran;
    for (int i = 0;i < 5;i++) {
        cin >> arr[i];
    }
    cin >> mingran >> maxgran;
    for (int k = 0;k < 5;k++) {
        if (mingran<arr[k] and arr[k]<maxgran) {
            cout << k<<' ';
        }
    }
    return 0;
}