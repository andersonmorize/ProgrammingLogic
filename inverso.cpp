#include <iostream>

int main()
{
    int x[10];

    for (int i = 0; i < 10; i++)
        std::cin >> x[i];

    for (int i = 9; i >= 0; i--)
        std::cout << x[i] << '\n';
}