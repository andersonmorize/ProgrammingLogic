#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    int n, c, m;

    cin >> n >> c >> m;

    set<int> x;

    int xx;
    for (int i = 0; i < c; i++)
    {
        cin >> xx;
        x.insert(xx);
    }


    int cont = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> xx;

        if (x.find(xx) != x.end()) {
            cont++;
            x.erase(xx);
        }
    }

    cout << c - cont;
    return 0;
}