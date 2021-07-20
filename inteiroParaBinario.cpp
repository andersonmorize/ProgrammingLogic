#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    vector<int> b;

    cin >> n;

    while (n > 0)
    {
        b.push_back(n % 2);
        n /= 2;
    }

    if (b.size() == 0)
        cout << 0;
    else {
        reverse(b.begin(), b.end());
        for (int i = 0; i < b.size(); i++)
        cout << b[i];
    }

    return 0;
}