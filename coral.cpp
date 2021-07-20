#include <iostream>

int main()
{
    int c[4];

    for (int i = 0; i < 4; i++)
        std::cin >> c[i];

    if (c[0] == c[2] || c[1] == c[3])
        std::cout << 'V';
    else
        std::cout << 'F';

    return 0;
}