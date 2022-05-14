#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int sum = 0;
  for (int i = 1; i<=N; i++) {
    int tmp = (
        i / 10000 +
        (i % 10000) / 1000 + 
        (i % 1000) / 100 + 
        (i % 100) / 10 + 
        i%10
    );
    if (A <= tmp && tmp <= B) {
      sum += i;
    }
  }
  cout << sum << endl;
}
