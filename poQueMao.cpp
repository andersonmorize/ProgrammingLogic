#include <iostream>

int main()
{
    int c, p[3];

    std::cin >> c >> p[0] >> p[1] >> p[2];

    for (int i = 1; i < 3; i++)
    {
        if (p[i-1] > p[i]) {
            int aux = p[i-1];
            p[i-1] = p[i];
            p[i] = aux;
        }
    }

    if ((p[0] + p[1] + p[2]) <= c)
        std::cout << 3;
    else if ((p[0] + p[1]) <= c)
        std::cout << 2;
    else if ((p[0] <= c) || (p[1] <= c))
        std::cout << 1;
    else
        std::cout << 0;

    return 0;
}