#include <iostream>

// Comment - simple calculation.

int func() {
    int x = 0;
    for (int i = 0; i < 10; ++i)
        x += i * i - 2 * i;

    std::cout << "func result:" << x << ";" << std::endl;

    return x;
}

// Main function.

int main() {
    std::cout << "x:" << func() << ";" << std::endl;
    return 0;
}
