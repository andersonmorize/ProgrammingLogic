#include <iostream>

using namespace std;

int main()
{
    int p = 0;
    int s = 1;

    int n, aux;

    cin >> n;

    if ( n > 0)
        cout << p << ' ';
    if ( n > 1)
        cout << s << ' ';

    for (int i = 2; i < n; i++)
    {
        aux = p + s;
        cout << aux << ' ';
        p = s;
        s = aux;
    }
    return 0;
}