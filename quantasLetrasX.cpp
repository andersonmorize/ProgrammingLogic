#include <iostream>

using namespace std;

int main()
{
    string s;
    char x;
    int cont = 0;

    cin >> s;
    cin >> x;

    for (int i = 0; i < s.size(); i++)
        if( s[i] == x )
            cont++;
    
    cout << cont;
    return 0;
}