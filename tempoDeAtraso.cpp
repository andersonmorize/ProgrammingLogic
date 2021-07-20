#include <iostream>

using namespace std;

int main()
{
    int ha, ma, hr, mr;

    cin >> ha >> ma >> hr >> mr;

    int d = ((hr * 60) + mr) - (((ha * 60) + ma) + 45);

    if (d >= 0)
        cout << "Sucesso";
    else {
        cout << "Atrasado " << abs(d);
    }

    return 0;
}