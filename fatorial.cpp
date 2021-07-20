#include <iostream>

int soma = 1;

void fatorial(int n) {
    
    if (n == 0) {
        return;
    } else {
        soma *= n;
        fatorial(n-1);
    }
}

int main()
{
    int n;

    std::cin >> n;
    fatorial(n);
    std::cout << soma;

    return 0;
}