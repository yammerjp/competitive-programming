#include <iostream>
#include <vector>

using namespace std;

int main(void){
  vector<int> v;
  cout << v.size() << endl;
  v.push_back(1);
  v.push_back(10);
  v.push_back(12);
  cout << v.size() << endl
       << v.front() << endl
       << v.back() << endl;




}

