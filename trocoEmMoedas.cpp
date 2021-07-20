#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int moedas[] = {100, 50, 25, 10, 5, 1};
    int contMoedas[] = {0, 0, 0, 0, 0, 0};
    int passaMoeda = 0, vn = 0, contm = 0;
    while(vn < n)
    {
        if (vn + moedas[passaMoeda] <= n) {
            vn += moedas[passaMoeda];
            contMoedas[passaMoeda]++;
            contm++;
        } else {
            passaMoeda++;
        }
    }

    cout << contm << '\n';
    for(int i = 0; i < 6; i++)
        cout << contMoedas[i] << '\n';
}