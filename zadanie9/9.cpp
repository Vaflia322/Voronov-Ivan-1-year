#include <iostream>

using namespace std;

int main() {
    int arr[5],suma =0;
    double sredar;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        suma += arr[i];
    }
    sredar = suma / 5;
    for (int x = 0; x < 5; x++) {
        if (arr[x] > sredar) {
            cout << arr[x]<<' ';
        }
    }
    return 0;
}