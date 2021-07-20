#include <bits/stdc++.h>

int main()
{
    int n;

    std::cin >> n;

    double r[n], x;

    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        r[i] = sqrt(x);
    }

    std::cout << std::fixed << std::setprecision(4);


    for (int i = 0; i < n; i++)
        std::cout << r[i] << '\n';

    return 0;
}