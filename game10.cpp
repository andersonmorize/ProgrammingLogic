#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    int n, d, a;

    cin >> n >> d >> a;

    if (d > a)
        cout << d - a;
    else if (d < a)
        cout << (n - a) + d;
    else
        cout << 0;

    return 0;
}