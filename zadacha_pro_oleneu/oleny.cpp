#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int l, r, t;
    cin >> l >> r >> t;
    cout << t * (l / r) << ' ' << t * (l / r + !(l % r == 0)) << endl;
    return 0;
}