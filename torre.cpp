#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int t[n][n];

    int somaLinha = 0;
    int linhas[n];
    int somaColuna = 0;
    int colunas[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            std::cin >> t[i][j];
        } 
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            somaColuna += t[j][i];
            somaLinha += t[i][j];
        }

        linhas[i] = somaLinha;
        colunas[i] = somaColuna;

        somaLinha = 0;
        somaColuna = 0;
    }

    int melhor = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            int soma = (linhas[i] + colunas[j]) - t[i][j] * 2;

            if (soma > melhor)
                melhor = soma;
        }
    }
    std::cout << melhor;

    return 0;
}