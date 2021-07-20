#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    int n, m, dono;

    cin >> n >> m;

    int barra[n], cont[] = {0,0,0,0,0,0,0,0,0,0};

    for (int i = 0; i < n; i++)
    {
        cin >> barra[i];
    }

    int posiOriginal = 0;

    for (int i = 0; i < m; i++)
    {
        cin >> dono;

        dono--;
        if (posiOriginal < dono) {
            for (; posiOriginal < dono; posiOriginal++)
                cont[barra[posiOriginal]]++;
        } else {
            for(; posiOriginal > dono; posiOriginal--)
                cont[barra[posiOriginal]]++;
        }
    }

    cont[barra[dono]]++;

    for (int i = 0; i < 10; i++)
        cout << cont[i] << " ";
}