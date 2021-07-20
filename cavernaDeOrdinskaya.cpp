#include <iostream>

using namespace std;

int main()
{
    int n, m, num, antecessor, inv = 0;
    long long int soma;

    cin >> n >> m;

    soma = 0;
    antecessor = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        int min = std::min(num, m - num);
        int max = std::max(num, m - num);

        if (min >= antecessor)
        {
            soma += min;
            antecessor = min;
        }
        else if (max >= antecessor)
        {
            soma += max;
            antecessor = max;
        }
        else {
            inv = 1;
        }

    }

    if (inv)
        cout << -1 << endl;
    else
        cout << soma << endl;
    
    return 0;
}