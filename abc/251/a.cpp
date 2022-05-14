#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  for (int i = 0; i < 6; i += S.size() ) {
    cout << S;
  }
  cout << endl;
}
