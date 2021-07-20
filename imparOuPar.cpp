#include <iostream>

int main()
{
    int p, m1, m2;
    std::cin >> p >> m1 >> m2;

    if (p == 0) {
        if ((m1 + m2) % 2 == 0)
            std::cout << 0;
        else 
            std::cout << 1;
    } else {
        if ((m1 + m2) % 2 == 0)
            std::cout << 1;
        else 
            std::cout << 0;
    }

    return 0;
}