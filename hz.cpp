#include <iostream>
#include <Windows.h>

int Multiply(int a, int b);

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int a = -6;
    int b = -3;
    int result = multy(a, b);
    std::cout << "Ответ: " << result << "\n";

    return 0;
}

int multy(int a, int b) {
    if (b == 0) {
        return 0;
    }
    if (b < 0) {
        return multy(a, -b);
    }

    return a + multy(a, b - 1);
}