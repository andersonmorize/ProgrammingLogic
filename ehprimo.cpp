#include <bits/stdc++.h>

bool ehprimo(long int x)
{
    if (x == 1) {
        return false;
    }

    if (x == 2 or x == 3) {
        return true;
    }

    if ( x % 2 == 0 or x % 3 == 0) {
        return false;
    }

    int s = sqrt(x);

    for(int i = 3; i <= s; i+=2) {
        if(x % i == 0) {
            return false;
        }
    }
        
    return true;
}

int main()
{
    long int x;
    std::cin >> x;
    
    if( ehprimo(x) )
    {
        std::cout << 'S';
    } else {
        std::cout << 'N';
    }
    
    return 0;
}