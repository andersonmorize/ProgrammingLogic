#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> n(11);
    int p;

    for (int i = 0; i < 10; i++)
        cin >> n[i];

    cin >> p;
    for (int i = 0; i < 10; i++) {
        if (n[i] == p) {
            cout << "SIM";
            return 0;
        }
    }

    cout << "NAO";
    return 0;
}