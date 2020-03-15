#include <iostream>
#include <stdlib.h>
using namespace std;

int in(){
  int input;
  cin >> input;
  return input;
}

int main(void){
  int N, M;
  int sum = 0;
  cin >> N >> M;

  int penalty=0;
  int *isAc = (int *)malloc(N);

  for(int i=0;i<M;i++){
    int p;
    string S;
    cin >> p >> S;
    if(S=="AC"){
      isAc[p]=1;
    }else if(isAc[p]!=1){ // まだ不正解でミスった
      penalty++;
    }
  }
  int count = 0;
  for(int i=0;i<N;i++){
    if(isAc[i]==1){
      count++;
    }
  }
  cout << count << penalty << endl;

    
  return 0; 

}
