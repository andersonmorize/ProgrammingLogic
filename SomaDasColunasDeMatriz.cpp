#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c[]= {0, 0, 0}, n;

    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        c[0] += n;

        cin >> n;
        c[1] += n;

        cin >> n;
        c[2] += n;
    }

    for (int i = 0; i < 3; i++)
        cout << "Coluna " << i << ": " << c[i] << '\n';

    return 0;
}