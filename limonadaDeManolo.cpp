#include <iostream>

using namespace std;

int main()
{
    int n, c;

    cin >> n >> c;

    int s = 0,pd = c;

    for (int i = 0; i < n; i++) {
        if (pd > 1) {
            s += pd;
            pd--;
        } else {
            s += n - i;
            break;
        }
    }

    cout << s;
}