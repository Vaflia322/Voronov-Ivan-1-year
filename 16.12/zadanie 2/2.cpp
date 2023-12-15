#include <iostream>

using namespace std;


int* createArray(int& size) {
    int* newArray = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> newArray[i];
    }

    return newArray;
}

int sravnenie(int* Array, int size) {
    int count = 0;
    int posl_el = Array[size - 1];
    for (int i = 0; i < size;i++) {
        if (Array[i] != posl_el) {
            count++;
        }
    }
    cout << count;
    return 0;
}

int main() {
    int size; cin >> size;
    int* arr = new int[size];
    arr = createArray(size);
    sravnenie(arr, size);
}