#include <iostream>
using namespace std;

int top(int number){

  while(number>=10){
    number /= 10;
  }
  return number;
}
int last(int number){
  return number %=10;
}

int main(void){
  int n;
  int count=0;
  cin >> n;

  for(int a=1;a<=n;a++){
    for(int b=1;b<=n;b++){
      if(top(a)==last(b) && last(a) == top(b)){
        count ++;
      }
    }
  }
  cout << count << endl;
  return 0;
}
