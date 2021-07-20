#include <bits/stdc++.h>

int main()
{
    char o;
    double a,b;
    std::cin >> o;
    std::cin >> a >> b;
    std::cout << std::fixed << std::setprecision(2);
    if (o == 'M')
 		std::cout << a * b;
   	else
        std::cout << a / b;
    
    return 0;
}
