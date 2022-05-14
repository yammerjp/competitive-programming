#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  int tmp;
  cin >> a;

  int doMin = INT_MAX;

  for(int i = 0; i<a; i++) {
    cin >> tmp;
    if (tmp%2 != 0) {
      cout << 0 << endl;
      return 0;
    }
    int j = 1;
    while (true) {
      tmp /= 2;
      if (tmp %2 != 0) {
        break;
      }
      j++;
    }
    if (j < doMin) {
      doMin = j;
    }
  }
  cout << doMin << endl;
}
