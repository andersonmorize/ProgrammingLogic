#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, n2, x;

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    // fila
    cin >> n;
    int f[n];
    for (int i = 0; i < n; i++)
        cin >> f[i];

    // saiu da fila
    cin >> n2;
    set<int> skip;
    int element;
    for (int i = 0; i < n2; i++) {
        cin >> element;
        skip.insert(element);
    }

    // exibição
    for (int i = 0; i < n; i++)
    {
        if (skip.find(f[i]) == skip.end()) {
            cout << f[i] << " ";
        }
    }

    return 0;
}