#include <iostream>

using namespace std;

int main()
{
    int r, l, d;

    cin >> l >> r >> d;

    if ((r > 50) && (l < r) && (r > d))
        cout << 'S';
    else 
        cout << 'N';

    return 0;
}