#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    for (int i = n + 1; i <= n + 10; i++)
        std::cout << i << " ";

    return 0;
}