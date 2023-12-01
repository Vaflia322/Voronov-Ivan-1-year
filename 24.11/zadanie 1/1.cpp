#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // Запрашиваем имя файла у пользователя
    string fileName;
    cout << "Введите имя файла: ";
    cin >> fileName;

    // Открываем файл для записи
    ofstream outFile(fileName);

    if (!outFile) {
        cerr << "Не удалось открыть файл для записи!" << endl;
        return 1;
    }

    // Запрашиваем данные у пользователя и записываем их в файл
    string data;
    cout << "Введите данные для записи в файл (для завершения введите 'end'): ";
    while (cin >> data && data != "end") {
        outFile << data << endl;
    }

    // Закрываем файл
    outFile.close();

    cout << "Данные успешно записаны в файл." << endl;

    return 0;
}
