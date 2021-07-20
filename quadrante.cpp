#include <iostream>

int main()
{
    int x, y;
    std::cin >> x >> y;

    if (x == 0 || y == 0)
        std::cout << "eixos";
    else if (x > 0) {
        if (y > 0)
            std::cout << "Q1";
        else
            std::cout << "Q4";
    } else {
        if (y > 0)
            std::cout << "Q2";
        else
            std::cout << "Q3";
    }

    return 0;
}