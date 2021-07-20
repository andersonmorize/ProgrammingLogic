#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;

    vector<int> par;
    vector<int> impar;

    for (int i = 0; i < 10; i++)
    {
        cin >> x;
        if (x % 2 == 0)
            par.push_back(x);
        else
            impar.push_back(x);
    }

    for (int i = 0; i < par.size(); i++)
        cout << par[i] << " ";

    cout << '\n';

    for (int i = 0; i < impar.size(); i++)
        cout << impar[i] << " ";
    
    return 0;
}