#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c,l;
    cin >> c >> l;
    
    if (c % 2 == 0 ) {
        if (l % 2 == 0)
            cout << 1;
        else
            cout << 0;
    } else {
        if (l % 2 == 0)
            cout << 0;
        else
            cout << 1;
    }

    return 0;
}
