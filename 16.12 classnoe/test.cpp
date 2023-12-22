#include <iostream>

using namespace std;

int main() {
    // Задаем размеры массива
    int n, m;
    cout << "Введите количество строк: ";
    cin >> n;
    cout << "Введите количество столбцов: ";
    cin >> m;

    // Создаем динамический двумерный массив
    int** array = new int*[n];
    for (int i = 0; i < n; ++i) {
        array[i] = new int[m];
    }

    // Заполняем массив значениями, введенными пользователем
    cout << "Введите значения для массива:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "Элемент [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Выводим массив на экран
    cout << "Двумерный массив:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    // Освобождаем выделенную память
    for (int i = 0; i < n; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
