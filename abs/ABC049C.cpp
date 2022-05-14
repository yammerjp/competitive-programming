#include <bits/stdc++.h>
using namespace std;

void print(bool success) {
  if (success) {
    cout << "YES" << endl;
    exit(0);
  }
  cout << "NO" << endl;
  exit(0);
}

int main() {
  string S;
  cin >> S;
  bool ok[10010];
  ok[0] = true;

  for(int i= 0; i < S.size() - 5; i++) {
    if (!ok[i]) {
      continue;
    }
    ok[i+5] = (
      ok[i+5] ||
      (S.compare(i, 5, "dream") == 0) ||
      (S.compare(i, 5, "erase") == 0)
      );
     ok[i+6] = (
      ok[i+6] ||
      (S.compare(i, 6, "eraser") == 0)
      );
     ok[i+7] = (
      ok[i+7] ||
      (S.compare(i, 7, "dreamer") == 0)
      );
  }
  print(ok[S.size()-1]);
}

