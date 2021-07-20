#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c[]= {0, 0, 0}, n;

    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        c[i] += n;

        cin >> n;
        c[i] += n;

        cin >> n;
        c[i] += n;
    }

    for (int i = 0; i < 3; i++)
        cout << "Linha " << i << ": " << c[i] << '\n';

    return 0;
}