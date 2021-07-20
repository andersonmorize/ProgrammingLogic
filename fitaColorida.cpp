#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int f[n];

    for (int i = 0; i < n; i++)
        cin >> f[i];

    // direita
    bool cond = false;
    int cor;
    for (int i = 0; i < n; i++)
    {
        if (f[i] == 0) {
            cond = true;
            cor = 1;
        } else if (cond) {
            f[i] = cor;
            if (cor < 9)
                cor++;
        }
    }

    // esquerda
    cond = false;
    bool cond2 = true;
    cor = 1;
    for (int i = n-1; i >= 0; i--)
    {
        if (f[i] == 0) {
            cond = true;
            cond2 = true;
            cor = 1;
        } else if (cond) {
            if (cor >= f[i] && f[i] != -1) {
                cond2 = false;
            } else if(cond2) {
                f[i] = cor;
                if (cor < 9)
                    cor++;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << f[i] << " ";

    return 0;
}