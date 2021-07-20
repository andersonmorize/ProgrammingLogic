#include <iostream>

int main()
{
    int r, cont = 0;

    std::cin >> r;

    while (r != 2018) {
        std::cin >> r;
        cont++;
    }

    std::cout << cont;
    return 0;
}