#include <iostream>

int main()
{
    int n, l, c, s = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> l >> c;

        if (l > c)
            s += c;
    }

    std::cout << s;
    return 0;
}