#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, W;
  int A[300] = {};
  cin >> N >> W;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  bool good[1000001] = {};

  for (int i = 0; i < N; i++) {
    if (A[i] < 1000001) {
      good[A[i]] = true;
    }
    for (int j = i+1; j  < N; j++) {
      if (A[i] + A[j] < 1000001) {
        good[A[i] + A[j]] = true;
      }
      for (int k = j+1; k < N; k++) {
        if (A[i] + A[j] + A[k]< 1000001) {
          good[A[i] + A[j] + A[k]] = true;
        }
      }
    }
  }


  int ct = 0;
  for (int i = 1; i <= W; i++) {
    if (good[i]) {
      // cout << i << endl;
      ct ++;
    }
  }
  cout << ct << endl;
}
