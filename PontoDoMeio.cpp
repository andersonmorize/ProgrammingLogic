// https://neps.academy/br/exercise/474

#include <iostream>
using namespace std;

int main() {

  long int passos, x = 2;

  cin >> passos;

  for (int i = 0; i < passos; i++) {
    x += x - 1;
  }

  cout << x * x;
}
