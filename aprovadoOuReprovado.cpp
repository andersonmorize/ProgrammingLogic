#include <iostream>

int main()
{
    double a, b;

    std::cin >> a >> b;

    double m = ((a * 0.4) + (b * 0.6));

    if (m >= 7)
        std::cout << "Aprovado";
    else if (m < 3)
        std::cout << "Reprovado";
    else
        std::cout << "Final";
    
    return 0;
}