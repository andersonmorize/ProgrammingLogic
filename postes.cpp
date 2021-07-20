#include <iostream>

using namespace std;

int main()
{
    int n, x, s = 0, c = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x < 50) {
            s++;
        } else if (x < 85) {
            c++;
        }
    }

    cout << s << ' ' << c;
    return 0;
}