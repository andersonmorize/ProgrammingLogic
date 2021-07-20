#include <iostream>

int main()
{
    int a[3];
    char b[] = {'A', 'B', 'C'};

    std::cin >> a[0] >> a[1] >> a[2];

    int s = a[0] + a[1] + a[2];

    if (s == 0 || s == 3)
        std::cout << '*';
    else if (s == 1) {
        for (int i = 0; i < 3; i++) {
            if (a[i] == 1) {
                std::cout << b[i];
                break;
            }
        }
    }
    else {
        for (int i = 0; i < 3; i++) {
            if (a[i] == 0) {
                std::cout << b[i];
                break;
            }
        }
    }
    return 0;
}