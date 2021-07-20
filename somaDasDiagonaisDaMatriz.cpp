#include <iostream>

using namespace std;

int main()
{
    int num[9];

    for (int i = 0; i < 9; i++)
    {
        cin >> num[i];
    }

    cout << "Diagonal principal: " << num[0] + num[4] + num[8] << '\n';
    cout << "Diagonal secundaria: " << num[2] + num[4] + num[6] << '\n';
    return 0;
}