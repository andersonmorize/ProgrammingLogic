#include <iostream>

using namespace std;

int main()
{
    int n, sn, m, x;

    cin >> n;
    sn = n;
    int f[n];

    for (int i = 0; i < n; i++)
        f[i] = 0;

    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> x;
        if (f[x-1] == 0) {
            sn--;
            f[x-1] = 1;
        }
    }

    cout << sn;
    return 0;
}