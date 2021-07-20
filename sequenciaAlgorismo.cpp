#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;

    int r[] = {0, 0, 0, 0 ,0 ,0, 0, 0, 0, 0};

    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int f = 0; f < s.length(); f++) {
            int num = (int)s[f] - '0';
            r[num]++;
        }
    }

    for (int  i = 0; i < 10; i++)
        cout << i << " - " << r[i] << '\n';
}