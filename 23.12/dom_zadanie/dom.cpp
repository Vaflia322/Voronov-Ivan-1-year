#include <iostream>
#include <vector>
using namespace std;
bool check(int n, vector <int> s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == n) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector <int> GorodaSElektr;
    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;
        GorodaSElektr.push_back(n);
    }
    int** Goroda = new int* [n];
    for (int i = 0; i < n; i++) {
        Goroda[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> Goroda[i][j];
        }
    }
    int counter = k;
    int money = 0;
    while (counter != n) {
        int mn = pow(10, 5) + 1;
        int number = 0;
        for (int i = 0; i < counter; i++) {
            for (int j = 0; j < n; j++) {
                if (Goroda[GorodaSElektr[i] - 1][j] < mn and Goroda[GorodaSElektr[i] - 1][j] != 0 and check(j + 1, GorodaSElektr)) {
                    mn = Goroda[GorodaSElektr[i] - 1][j];
                    number = j;
                }
            }
        }
        GorodaSElektr.push_back(number + 1);
        money += mn;
        counter++;
    }
    cout << money;
}