#include <iostream>

using namespace std;

int main()
{
    int x, h, l;
    int ha = 101, la = 101;

    for (int i = 0; i < 3; i++)
    {
        cin >> x;

        if (ha > x) {
            int aux = ha;
            ha = x;
            la = aux;
        } else if (la > x) {
            la = x;
        }
    }

    cin >> h >> l;

    if ((ha <= h && la <= l) || (ha <= l && la <= h))
        cout << 'S';
    else
        cout << 'N';

    return 0; 
}