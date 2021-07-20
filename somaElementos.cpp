#include <iostream>

int main()
{
    int n, x, s = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> x;
        s += x;
    }
    std::cout << s;

    return 0;
}