#include <iostream>

int main()
{
    int p, r;
    std::cin >> p >> r;

    if (!p)
        std::cout << 'C';
    else if (!r)
        std::cout << 'B';
    else
        std::cout << 'A';

    return 0;
}