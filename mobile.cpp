#include <iostream>

int main()
{
    int a, b, c, d;

    std::cin >> a >> b >> c >> d;

    if ((a == b + c + d) && (d == b + c) && (b == c))
        std::cout << 'S';
    else
        std::cout << 'N';

    return 0;
}