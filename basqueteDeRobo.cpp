#include <iostream>

int main()
{
    int h;
    std::cin >> h;
    if (h <= 800)
        std::cout << 1;
   	else if(h <= 1400)
        std::cout << 2;
    else if(h <= 2000)
        std::cout << 3;
    
    return 0;
}