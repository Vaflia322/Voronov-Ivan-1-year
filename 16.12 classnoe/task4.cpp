#include <iostream>
using namespace std;

int main() {
    int n,suma = 0; cin >> n;
    int* a = new int[n];
    for (int i = 1 ; i <= n ; i++){
        a[i-1] = i*i;
        suma+=a[i-1];
    }
    for (int i = 0 ; i < n ; i++){
        cout << a[i] << ' ';
    }
    cout << suma;
    delete[] a;
    return 0;
}