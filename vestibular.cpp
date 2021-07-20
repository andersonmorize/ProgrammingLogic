#include <iostream>

using namespace std;

int main()
{
    int n, soma = 0;
    cin >> n;

    string gab, res;

    cin >> gab >> res;

    for (int i = 0; i < n; i++)
        if (gab[i] == res[i])
            soma++;

    cout << soma;
    return 0;
}