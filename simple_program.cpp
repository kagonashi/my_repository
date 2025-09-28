#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main (){
int operation;
int result;
string opSymbol;
string opName;

cout <<"Здравствуйте! Это программа для ввода двух целых чисел "<< endl;
    // Ввод первого числа
    int num1;
    cout << "Введите первое целое число: ";
    cin >> num1;
    cout << "Вы ввели первое число: " << num1 << endl;
    
    // Ввод второго числа
    int num2;
    cout << "Введите второе целое число: ";
    cin >> num2;
    cout << "Вы ввели второе число: " << num2 << endl;
   // Случайный выбор операции (0-4)
    operation = rand() % 5;
    
    // Выполнение выбранной операции
    switch (operation) {
        case 0: // Сложение
            result = num1 + num2;
            opSymbol = "+";
            opName = "сложение";
            break;
        case 1: // Вычитание
            result = num1 - num2;
            opSymbol = "-";
            opName = "вычитание";
            break;
        case 2: // Умножение
            result = num1 * num2;
            opSymbol = "*";
            opName = "умножение";
            break;
        case 3: // Деление
            if (num2 != 0) {
                result = num1 / num2;
                opSymbol = "/";
                opName = "деление";
            } else {
                cout << "Ошибка: деление на ноль!" << endl;
                return 1;
            }
            break;
        case 4: // Остаток от деления (только для целых чисел)
            if (static_cast<int>(num2) != 0) {
                result = static_cast<int>(num1) % static_cast<int>(num2);
                opSymbol = "%";
                opName = "остаток от деления";
            } else {
                cout << "Ошибка: деление на ноль!" << endl;
                return 1;
            }
            break;
    }
    
    // Вывод результата
    cout << "\nСлучайная операция: " << opName << endl;
    cout << "Результат: " << num1 << " " << opSymbol << " " << num2 << " = " << result << endl;
    
    return 0;
}
