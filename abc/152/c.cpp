#include <iostream>
using namespace std;

long long in(){
  long long i;
  cin >> i;
  return i;
}

int main(void){
  long long n;
  long long output = 1;
  cin >> n;

  long long min = in();
  
  for( long long i=0 ; i<n-1;i++){
    long long tmp = in();
    if(min>tmp){
      min = tmp;
      output++;
    } else {
    }
  }
  cout << output << endl;
  return 0;
  
}
