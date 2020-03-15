#include <iostream>
using namespace std;

void hoshina2hoshino(){
  string s;
  string target = "Hoshino";
  string replacement = "Hoshina";
  getline(cin, s);
  if(!target.empty()){
    string::size_type pos = 0;
    while( (pos = s.find(target, pos)) != string::npos) {
      s.replace(pos, target.length(), replacement);
      pos += replacement.length();
    }
  }
  cout << s << endl;
 return ;

}

int main(void){
  int length;
  cin >> length;
  for(int i=0;i<length; i++){
    hoshina2hoshino();
  }
  return 0;
}

