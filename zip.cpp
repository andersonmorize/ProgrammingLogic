#include <bits/stdc++.h>

using namespace std;

int main()
{
    int la, lb, ca, cb, lia, carolina = 0;

    cin >> la >> lb >> ca >> cb;

    // pontuação lia
    if (la == lb) {
        lia = (la + lb) * 2;
    } else if (la == lb - 1 || la == lb + 1) {
        lia = (la + lb) * 3;
    } else {
        lia = la + lb;
    }

    // pontuação carolina
    if (ca == cb) {
        carolina = (ca + cb) * 2;
    } else if (ca == cb - 1 || ca == cb + 1) {
        carolina = (ca + cb) * 3;
    } else {
        carolina = ca + cb;
    }

    if (lia == carolina)
        cout << "empate";
    else if (lia > carolina)
        cout << "Lia";
    else
        cout << "Carolina";

    return 0;
}