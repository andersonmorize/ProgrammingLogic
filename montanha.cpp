#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;

    int crescente = 0;
    int descrecente = 100000;

    bool f1 = true, f2 = true;

    cin >> x;
    crescente = x;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        if (crescente < x && f1) {
            crescente = x;
        } else {
            f1 = false;
            if (descrecente > x && f2) {
                descrecente = x;
            } else {
                f2 = false;
            }
        }
    }

    if (f2)
        cout << 'N';
    else
        cout << 'S';
}