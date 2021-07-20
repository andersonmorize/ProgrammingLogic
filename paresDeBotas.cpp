#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<pair<int, char>> botas(n);

    for (int i = 0; i < n; i++)
    {
        cin >> botas[i].first;
        cin >> botas[i].second;
    }
    int pares = 0;
    for (int i = 0; i < n; i++)
    {
        if (botas[i].first != 0) {
            for (int j = i; j < n; j++)
            {
                if (botas[i].first == botas[j].first && botas[i].second != botas[j].second) {
                    botas[i].first = 0;
                    botas[j].first = 0;
                    pares++;
                    break;
                }
            }
        }
    }

    cout << pares;
    return 0;
}