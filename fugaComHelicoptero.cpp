#include <iostream>

int main()
{
    int h, p, f, d;

    std::cin >> h >> p >> f >> d;

    if (d == 1) {
        if (p < f && f < h)
            std::cout << 'S';
        else if (f < h && h < p)
            std::cout << 'S';
        else if (h < p && p < f)
            std::cout << 'S';
        else
            std::cout << 'N';
    }
    else {
        if (h < f && f < p)
            std::cout << 'S';
        else if (p < h && h < f)
            std::cout << 'S';
        else if (f < p && p < h)
            std::cout << 'S';
        else
            std::cout << 'N';
    }

    return 0;
}