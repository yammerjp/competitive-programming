#include <iostream>
 
using namespace std;
 
int main() {
  long long int a,b,c, X, Y;
  cin >> a >> b >> c ;

  X = (c - a - b);
  Y = 4 * a * b;

  cout <<(  (  X > 0 && X * X > Y ) ? "Yes\n" : "No\n" );
  return 0;
}
