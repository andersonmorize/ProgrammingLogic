#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    char o;

    cin >> n >> a;
    cin >> o;
    cin >> b;

    if (o == '+') {
        if ((a + b) > n) {
            cout << "OVERFLOW";
        }
        else
            cout << "OK"; 
    } else {
        if ((a * b) > n) {
            cout << "OVERFLOW";
        }
        else
            cout << "OK";
    }

    return 0;
}