#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int number;
    int sum = 0;

    cout << "������� ����� (������� 0 ��� ����������):" << endl;

    while (true) {
        cin >> number;
        if (number == 0) {
            break; // ���������� ����� ��� ����� 0
        }
        sum += number; // ���������� ���������� ����� � �����
    }

    cout << "����� ���� ��������� �����: " << sum << endl;
    return 0;
}
