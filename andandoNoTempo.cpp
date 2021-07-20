#include <iostream>

using namespace std;

int main() {
    
    int a, b, c;

    cin >> a >> b >> c;

    if ( a == b or a == c or b == c ) {
        cout << "S";
    }
    else {

        if ( a > b and a > c and a == b + c) {
            cout << "S";
        }
        else if ( b > c and b > a and b == a + c) {
            cout << "S";
        }
        else if (c == a + b) {
            cout << "S";
        } else {
            cout << "N";
        }
    }

    return 0;
}