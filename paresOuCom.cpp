#include <iostream>

int main()
{
    int x, cont = 0;

    for (int i = 0; i < 3; i++)
    {
        std::cin >> x;

        if (x % 2 == 0) {
            cont++;
        } else if (x % 5 == 0) {
            cont++;
        }
    }

    std::cout << cont;
}