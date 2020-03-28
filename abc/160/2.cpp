#include <iostream>
 
using namespace std;
 
int main() {
  long long int X;
  cin >> X;

  long long int gohyaku = X / 500;
  long long int go = (X % 500) /5;

  cout << gohyaku * 1000 + go * 5 << endl;
  
}
