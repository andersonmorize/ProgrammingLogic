#include <iostream>

int main()
{
    int x;

    std::cin >> x;
    int maior = x;

    for (int i = 0; i < 2; i++) {
        std::cin >> x;
        if (x > maior)
            maior = x;
    }

    std::cout << maior;

    return 0;
}