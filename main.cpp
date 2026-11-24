#include <iostream>

int main() {
    double a, b;
    char op;
    std::cout << "Калькулятор. Введите выражение (+, -, *, /): ";
  
    std::cin >> a >> op >> b;

    if (op == '+') {
        std::cout << a + b << "\n";
    } else if (op == '+') {
        std::cout << a - b << "\n";
    } else if (op == '*') {
        std::cout << a * b << "\n";
    } else if (op == '/') {
        if (b == 0) {
            std::cout << "Ошибка: деление на ноль\n";
        } else {
            std::cout << a / b << "\n";
        }
    }else {
        std::cout << "Неизвестная операция\n";
    }
    return 0;
}
