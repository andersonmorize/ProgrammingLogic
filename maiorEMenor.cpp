#include <iostream>

using namespace std;

int main()
{
    int n, x, menor, maior;
    cin >> n;

    cin >> x;
    menor = x;
    maior = x;

    for (int i = 0; i < n-1; i++) {
        cin >> x;

        if (x < menor) {
            menor = x;
        } else if (x > maior) {
            maior = x;
        }
    }

    cout << maior << endl << menor;
    return 0;
}