#include <iostream>

// Comment - simple calculation.

int main() {
    
    int x = 0;
    for(int i = 0; i < 10; ++i)
        x += i*i-2*i;
    
    std::cout << "x:" << x << std::endl;
    return 0;
}
