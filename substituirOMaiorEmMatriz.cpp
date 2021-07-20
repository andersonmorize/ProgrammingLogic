#include <iostream>

using namespace std;

int main()
{
    int vec[9], m = -100000000;

    for (int i = 0; i < 9; i++) {
        cin >> vec[i];
        if (vec[i] > m) {
            m = vec[i];
        }
    }

    for (int i = 0; i < 9; i++) {
        if (vec[i] == m) {
            cout << -1 << ' ';
        } else {
            cout << vec[i] << ' ';
        }

        if (i == 2 || i == 5)
            cout << '\n';
    }

    return 0;
}