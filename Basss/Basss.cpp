#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;
int main() {
    setlocale(LC_ALL, "Rus");
    cout << "----------------------------------\n";
    cout << "Первое задание\n";

    double x, y;

    while (true) {
        cout << "Введите переменную x: ";
        cin >> x;

        if (cin.good()) {
            break;
        }
        else {
            cout << "Ошибка: такого числа не существует. Введите корректное число.\n" <<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            
        }
    }
    while (true) {
        cout << "Введите переменную y: ";
        cin >> y;

        if (cin.good()) {
            break;
        }
        else {
            cout << "Ошибка: такого числа не существует. Введите корректное число.\n" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    double z = pow(y, 3) - 2 * pow(x, 2) + 7 * x * y - 4;

    cout << "Ответ на первое задание: " << z << endl;
    cout << "----------------------------------\n";
    cout << "Второе задание\n";

    while (true) {
        cout << "Введите переменную x: ";
        cin >> x;

        if (cin.good()) {
            break;
        }
        else {
            cout << "Ошибка: такого числа не существует. Введите корректное число.\n" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    if (x <= -3) {
        y = sin(pow(x, 2));
    }
    else if (x > -3 && x < 5) {
        y = 1 + exp(-x);
    }
    else {
        y = log(pow(x, 2)) / (3 + 4 * x);
    }

    cout << "Ответ на второе задание, y: " << fixed << setprecision(2) << y << endl;
    cout << "----------------------------------\n";
    
    
}