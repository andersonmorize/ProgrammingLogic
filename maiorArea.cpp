#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l1, a1, l2, a2;

    cin >> l1 >> a1 >> l2 >> a2;

    int area1 = l1 * a1, area2 = l2 * a2;

    if (area1 == area2)
        cout << "Empate";
    else if (area1 > area2)
        cout << "Primeiro";
    else
        cout << "Segundo";

    return 0; 
}