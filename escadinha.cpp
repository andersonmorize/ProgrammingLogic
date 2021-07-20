#include <bits/stdc++.h>

using namespace std;

int main()
{
    int poww = pow(10, 7);
    int n, x, aux, diff = poww, escadinha = 1;
    cin >> n;
    cin >> x;
    aux = x;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;

        if (diff == poww) {
            diff = x - aux;
        } else if (diff != x - aux) {
            escadinha++;
            diff = poww;
        } else {
            
            if (i == n - 2 && escadinha > 1) {
                escadinha++;
            }
            
            
        }
        aux = x;
    }

    cout << escadinha;

    return 0;
}