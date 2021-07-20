#include <iostream>

int main()
{
    int n, x, a = 0, b = 0;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> x;

        if(x == 1)
            a++;
        else {
            a++; b++;
        }
    }

    std::cout << (a % 2) << '\n' << (b % 2);
}