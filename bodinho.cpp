#include <iostream>

int main()
{
    int a, m;

    std::cin >> a >> m;

    std::cout << (char)((a + m <= 50)? 'S': 'N');

    return 0;
}