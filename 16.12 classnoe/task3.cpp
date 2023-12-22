#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int s = 0;
    int* a = new int[n];
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
        s += a[i];
    }
    int kolvo = 0;
    int y = 0;
    for (int i = 0 ; i < n ; i++){
        if (a[i]==s/n){
            kolvo ++;
        }
    }
    int* a2 = new int[n-kolvo];
    for (int i = 0 ; i < n ; i++){
        if (a[i] != s/n){
            a2[y] = a[i];
            y++;
        }
    }
    for (int i = 0 ; i < n-kolvo ; i++){
        cout << a2[i] << ' ';
    }
    delete[] a;
    return 0;
}
