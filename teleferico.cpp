#include <iostream>

int main()
{
    int c, a;
    std::cin >> c >> a;

    c--;

    if ((a % c) == 0)
        std::cout << (a / c);
    else
        std::cout << (a / c) + 1;
    
    return 0;
}