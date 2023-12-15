#include <iostream>

using namespace std;


int* createArray(int& size) {
    int* newArray = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> newArray[i];
    }

    return newArray;
}

int* sumArray(int* arr1, int* arr2, int* result, int size) {
    for (int i = 0; i < size;i++) {
        result[i] = arr1[i] + arr2[size - i - 1];
    }
    return result;
}

int main() {
    int size;
    cin >> size;

    int* arr1;
    int* arr2;
    arr1 = createArray(size);
    arr2 = createArray(size);
    int* result = new int[size];
    result = sumArray(arr1, arr2, result, size);
    for (int i = 0; i < size;i++) {
        cout << result[i] << ' ';
    }
    return 0;
}