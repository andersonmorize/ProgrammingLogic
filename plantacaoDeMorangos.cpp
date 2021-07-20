#include <iostream>

using namespace std;

int main()
{
    int ra1, rb1, ra2, rb2;
    cin >> ra1 >> rb1 >> ra2 >> rb2;

    if ((ra1 * rb1) >= (ra2 * rb2))
        cout << (ra1 * rb1);
    else
        cout << (ra2 * rb2);

    return 0;
}