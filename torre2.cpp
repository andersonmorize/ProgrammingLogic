#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int t[n][n];

    double melhorMedia = 0, aux = 0;
    int menorNum = 1000000000;
    int il;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            std::cin >> t[i][j];
            if (menorNum > t[i][j])
                menorNum = t[i][j];
            aux += t[i][j];
        }

        aux -= menorNum;

        if (melhorMedia < aux / n) {
            melhorMedia = aux / n;
            il = i;
        }

        aux = 0;
    }

    std::cout << "Melhor linha = " << il;
}