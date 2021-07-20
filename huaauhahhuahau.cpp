#include <bits/stdc++.h>

using namespace std;

int main()
{
    string risada;

    cin >> risada;

    vector<char> vogais;

    for (int i = 0; i < risada.size(); i++) {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u') {
            vogais.push_back(risada[i]);
        }
    }

    int eh = 1;


    for (int i = 0, j = vogais.size() - 1; i < vogais.size(); i++, j--) {
        if (vogais[i] != vogais[j]) {
            eh = 0;
        }
    }

    if (eh) 
        cout << 'S';
    else
        cout << 'N';

    return 0;
}