#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // ����������� ��� ����� � ������������
    string fileName;
    cout << "������� ��� �����: ";
    cin >> fileName;

    // ��������� ���� ��� ������
    ofstream outFile(fileName);

    if (!outFile) {
        cerr << "�� ������� ������� ���� ��� ������!" << endl;
        return 1;
    }

    // ����������� ������ � ������������ � ���������� �� � ����
    string data;
    cout << "������� ������ ��� ������ � ���� (��� ���������� ������� 'end'): ";
    while (cin >> data && data != "end") {
        outFile << data << endl;
    }

    // ��������� ����
    outFile.close();

    cout << "������ ������� �������� � ����." << endl;

    return 0;
}
