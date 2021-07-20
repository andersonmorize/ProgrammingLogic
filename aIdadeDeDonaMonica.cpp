#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, a, b, c, maior;

    cin >> m >> a >> b;

    c = m - (a + b);
    maior = max(a, b);

    cout << max(maior, c);

    return 0;
}