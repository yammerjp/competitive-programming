#include <iostream>
using namespace std;

int in(){
  int input;
  cin >> input;
  return input;
}

int main(void){
  int N, K, M;
  int sum = 0;
  cin >> N >> K >> M;

  for(int i=0;i<N-1;i++){
    sum += in();
  }
  if( sum >= M*N ){
    cout << 0 << endl;
  } else if( (sum + K) >= M*N ){
    cout << M*N-sum << endl;
  } else {
    cout << -1 << endl;
  }
  return 0; 

}
