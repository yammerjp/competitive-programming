#include <iostream>
 
using namespace std;
 
int main() {
  int K,N;
  int A[200000];

  cin >> K >> N;
  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  // 基本は配列の最後を抜いたやつ
  // ただし、配列のから2番目が抜群に長いとき、要検討

  int disMax = K - A[N-1]+A[0];
  for(int i=1;i<N;i++){
    if ( A[i] - A[i-1] > disMax ){
      disMax = A[i] - A[i-1];
    }
  }
  cout << K - disMax<< endl;
  

  /*
  cout << K << N << endl;
  for(int i=0;i<N;i++){
    cout << A[i];
  }
  cout << endl;
  */
  
}
