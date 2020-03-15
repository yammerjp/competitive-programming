#include <iostream>
using namespace std;

int main(void){
  int a;
  int b;
  string s="";
  cin >> a >> b;
  int min = a>b? b : a;
  int max = a>b? a : b;

  for (int i=0;i<max;i++){
    s += to_string(min);
  }

  cout << s << endl;
}
