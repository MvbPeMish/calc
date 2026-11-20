#include <iostream>

int main() {
    double a, b;
    char op;
    std::cout << "Введите выражение (например, 2 + 3): ";
    std::cin >> a >> op >> b;

    if (op == '+') {
        std::cout << a + b << "\n";
    } else if (op == '-') {
        std::cout << a - b << "\n";
    } else if (op == '*') {
        std::cout << a * b << "\n";
    } else if (op == '/') {
        std::cout << a / b << "\n";
    } else {
        std::cout << "Неизвестная операция\n";
    }
    return 0;
}
