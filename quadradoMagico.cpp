#include <iostream>

int main()
{
    int m[3][3];

    int soma = 0;
    float compara;
    bool teste = true;

    for (int i = 0; i < 3; i++)
    {
        soma = 0;
        for (int f = 0; f < 3; f++)
        {
            std::cin >> m[i][f];
            soma += m[i][f];
        }

        if (i == 0 )
            compara = soma;
        else {
            if (soma != compara) {
                teste = false;
            }
        }
    }

    if (!teste) {
        std::cout << "NAO";
        return 0;
    }

    for (int i = 0; i < 3; i++)
    {
        soma = 0;
        for (int f = 0; f < 3; f++)
        {
            soma += m[f][i];
        }

        if (soma != compara) {
            std::cout << "NAO";
            return 0;
        }
    }


    soma = 0;

    for (int i = 0; i < 3; i++)
    {
        soma += m[i][i];
    }
    if (soma != compara) {
        std::cout << "NAO";
        return 0;
    }

    int di = 0;
    soma = 0;
    for (int i = 2; i >= 0; i--)
    {
        soma += m[di++][i];
    }

    if (soma != compara) {
        std::cout << "NAO";
        return 0;
    }

    std::cout << "SIM";
    return 0;
}