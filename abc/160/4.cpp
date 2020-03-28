#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
  int N, X, Y;
  cin >> N >> X >> Y;

  for( int k=1; k<N; k++){
    // 各kについて考える
    if(k==1){
      cout << N << endl;
      continue;
    }
    // e(X,Y)がない時を考えると、
    int output = N-k;
    cout << output << endl;

    /*
    int edgeCount=0;
    // 各頂点からk回移動してその点より大きな点へ最短で届く場所の数を数える。
    for(int i=1; i<N-1; i++){
      // 点iからk点最短で移動して、iより大きな点にたどり着けるか
      if (i<=X){
        // ショートカット前から開始
        // 絶対にバックしない
        // ショートカットはするかも
        // 点iから点Nまでの距離
        int distance_i_to_N = N - (Y-X-1) - i;
        int distance_i_to_Y = distance_i_to_N - (N-Y);
        if( k <= distance_i_to_N ){
          edgeCount +=1;
//          cout << i << N << distance_i_to_Y << endl;
        }
        if( k <= distance_i_to_Y){
          edgeCount +=1;
        }
        continue;
      }
      if (i>=Y) {
        // ショートカット後から開始
        // 絶対にバックしない
        // ショートカットもしない
        if(i+k<=N){
          cout << "if( i+k <= N ){" << endl;
          edgeCount+=1;
        }
        continue;
      }
      // 点iから点Yまでの距離
      int distance_i_to_Y = min(Y-i, i-X+1);// ショートカットしない,戻ってもショートカットする
      int distance_Y_to_N = N - Y;

      if( k < distance_i_to_Y + distance_Y_to_N ){
          cout << "if( k < distance_i_to_Y + distance_Y_to_N ){" << endl;
        edgeCount+=1;
      }
      // ショートカット中から開始
      // バックしてショートカットするか、ショートカットしないか
    }
    cout << edgeCount << endl;
  }
  */
}
