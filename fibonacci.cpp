#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    if (n == 0) {
        cout << 1;
        return 0;
    }
    else if (n == 1 ) {
        cout << 1;
        return 0;
    } else if ( n == 2) {
        cout << 2;
        return 0;
    }
    
    int soma = 0, aux, fi = 1, ff = 2;

    for (int i = 2; i < n; i++) {
        aux = ff;
        ff = fi + ff;
        fi = aux;
    }

    cout << ff;

    return 0;
}