#include <iostream>

using namespace std;

int main() {
    int pe, ce, pd, cd;

    cin >> pe >> ce >> pd >> cd;

    if (pe * ce == pd * cd)
        cout << 0;
    else if (pe * ce > pd * cd)
        cout << -1;
    else
        cout << 1;

    return 0;
}