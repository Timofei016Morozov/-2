#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int number;
    int sum = 0;

    cout << "Введите числа (введите 0 для завершения):" << endl;

    while (true) {
        cin >> number;
        if (number == 0) {
            break; // Завершение цикла при вводе 0
        }
        sum += number; // Добавление введенного числа к сумме
    }

    cout << "Сумма всех введенных чисел: " << sum << endl;
    return 0;
}
