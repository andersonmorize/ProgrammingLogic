#include <iostream>

int main()
{
    int d1, d2, h1, h2, m1, m2;

    std::cin >> d1 >> h1 >> m1 >> d2 >> h2 >> m2;

    int d = d2 - d1;
    int h = h2 - h1;
    int m = m2 - m1;

    std::cout << (d * 86400) + (h * 3600) + (m * 60);

    return 0;
}