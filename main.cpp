#include <iostream>

// Comment - simple calculation.

bool test_func() {
    if (func() > 0)
        return true;
    return false;
}

int func() {
    int x = 0;
    for (int i = 0; i < 10; ++i)
        x += i * i - 2 * i;

    return x;
}

// Main function.

int main() {
    std::cout << "x:" << func() << ";" << std::endl;
    std::cout << "test:" << test_func() << ";" << std::endl;
    return 0;
}
