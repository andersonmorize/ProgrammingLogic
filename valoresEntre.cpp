#include <iostream>

int main()
{
    int a,b;
    std::cin >> a >> b;

    int menor = a, maior = b;

    if (a > b) {
        menor = b;
        maior = a;
    }

    for (int i = menor; i <= maior; i++)
        std::cout << i << " ";

    return 0;
}