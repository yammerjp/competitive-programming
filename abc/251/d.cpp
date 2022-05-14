#include <bits/stdc++.h>
using namespace std;

int main() {
  int W;
  cin >> W;
  int numbers[300] = {1, 2, 3};
  int nowMax = 6;
  cout << 300 << endl;
  cout << "1 2 3";
  for(int i = 3; i < 300; i++) {
    numbers[i] = nowMax;
    cout << " " << numbers[i];

    for(int j = 0; j < i; j++) {
    }
  }
  cout << endl;
}
