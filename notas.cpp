// https://neps.academy/br/exercise/495

#include <iostream>

using namespace std;

int foo(int vec[], int size, int num) {
  int count = 0;

  for (int i = 0; i < size; i++) {
    if (vec[i] == num) {
      count++;
    }
  }
  return count;
}

int main() {
  int x, countAux, count = -1, var = -1;

  cin >> x;

  int v[x];

  for (int i = 0; i < x; i++)
    cin >> v[i];

  for (int i = 0; i < x; i++) {
    countAux = foo(v, x, v[i]);

    if ( count < countAux ) {
      var = v[i];
      count = countAux;
    } else if ( count == countAux && var < v[i]) {
      var = v[i];
    }
  }
  cout << var;
}
