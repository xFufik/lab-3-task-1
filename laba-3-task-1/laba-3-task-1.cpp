#include <iostream>
#include <clocale>

using namespace std;

/*
Лабораторная работа 3. Задание 1. Индивидуальный вариант 24.
Определить различны ли все цифры введенного четырехзначного числа.
return 0 - все окей. Код ошибки 1 - не окей.
*/

int main() {
    setlocale(LC_ALL, "ru");
    int a, a1, a2, a3, a4;
    cout << "Введите четырехзначное число: ";
    cin >> a;
    if (a < 999 || a > 9999) {
        cerr << "Введенное число не четырехзначное " << endl;
        return 1;
    }
    a1 = a / 1000;
    a2 = a / 100 % 10;
    a3 = a / 10 % 10;
    a4 = a % 10;
    if (a1 == a2 && a2 == a3 && a3 == a4 && a1 == a3 && a1 == a4 && a2 == a4) {

        cout << "Ложь" << endl;
    }
    else {
        cout << "Истина" << endl;
    }
    return 0;
}