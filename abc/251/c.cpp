#include <bits/stdc++.h>
using namespace std;


map<string, bool> poems; // poem, 特典

bool isOrigin(string needle) {
  return poems.find(needle) == poems.end();
}

void registerOrigin(string needle) {
  poems[needle] = true;
}

int main() {
  int N;
  int maxI = 0;
  int maxPoint = 0;


  cin >> N;
  for (int i = 0; i < N; i ++)  {
    string poem;
    int point;
    cin >> poem >> point;

    if (!isOrigin(poem)) {
      continue;
    }
    registerOrigin(poem);
    if (point > maxPoint) {
      maxI = i;
      maxPoint = point;
    }
  }
  cout << maxI + 1 << endl;
}
