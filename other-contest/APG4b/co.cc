#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;

  string text;
  int price;

  // パターン1
  if (p == 1) {
    cin >> price;
  }

  // パターン2
  if (p == 2) {
    cin >> text >> price;
  }

  int N;
  cin >> N;

  if (p == 2)
    cout << text << "!" << endl;
  cout << price * N << endl;
}
