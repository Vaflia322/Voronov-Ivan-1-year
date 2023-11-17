#include <iostream>
using namespace std;

int main() {
    long long r;
    cin >> r;
    long long count = 0;
    for (long long i = 0;i < r;i++) {
        count += ceil(sqrt(r * r - i * i));
    }
    cout << count * 4;
    return 0;
}
