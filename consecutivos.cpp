#include <iostream>

int main()
{
    int n, x, s = 1, ns = 0, aux;
    std::cin >> n;

    std::cin >> x;
    aux = x;

    for (int i = 0; i < n - 1; i++)
    {
        std::cin >> x;
        if (x == aux) {
            s++;
        } else {
            s = 1;
            aux = x;
        }

        if (s > ns)
            ns = s;
    }

    std::cout << ns;
    return 0;
}