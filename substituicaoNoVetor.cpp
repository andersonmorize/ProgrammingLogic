#include <bits/stdc++.h>

using namespace std;

int main()
{
    int vec[10], menor = 1000000000;
    vector<int> ocorrencia;

    for (int i = 0; i < 10; i++)
    {
        cin >> vec[i];

        if (menor > vec[i]) {
            ocorrencia.clear();
            ocorrencia.push_back(i);
            menor = vec[i];
        }
        else if (menor == vec[i])
            ocorrencia.push_back(i);
    }

    cout << "Menor: " << menor << endl;
    cout << "Ocorrencias:";
    for (int i = 0; i < ocorrencia.size(); i++)
        cout << ' ' << ocorrencia[i];
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        if (vec[i] == menor)
            cout << -1 << ' ';
        else
            cout << vec[i] << ' ';
    }
    return 0;
}