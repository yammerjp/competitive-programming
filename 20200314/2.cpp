#include <iostream>
 
using namespace std;
 
int main() {
  long long int h,w;
  cin >> h >> w;
  if( h == 1 || w == 1 ){
    cout << 1  << "\n";
    return 0;
  }

  cout << (h*w+1)/2  << "\n";
  return 0;
}
