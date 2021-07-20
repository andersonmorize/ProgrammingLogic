#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    int t[3];
    int tandn[2];
    
    for (int i = 0; i < 3; i++)
        cin >> t[i];


    tandn[0] = t[0];
    tandn[1] = 0;

    for (int f = 0; f < 3; f++)
    {
        for (int i = 0; i < 3; i++)
        {
            if(tandn[0] > t[i]) {
                tandn[0] = t[i];
                tandn[1] = i;
            }
        }

        cout << tandn[1] + 1 << '\n';
        t[tandn[1]] = 1001;
        tandn[0] = t[tandn[1]];
    }

    return 0;
}
