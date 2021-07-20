#include <iostream>

int main()
{
    int y, x, a[] = {0, 0, 0};

    std::cin >> y;

    for (int i = 0; i < y; i++) {
        std::cin >> x;

        if (x % 2 == 0)
            a[0]++;
        if (x % 3 == 0)
            a[1]++;
        if (x % 4 == 0)
            a[2]++;
    }

    for (int i = 0; i < 3; i++)
        std::cout << a[i] << '\n';

    return 0;
}