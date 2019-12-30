#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll X;
  cin >> X;
  vector<int> v;
  ll i = 2;
  while(1){
    bool flag = true;
    for(auto x: v){
      if(i % x == 0){
	flag = false;
	break;
      } 
    }
    if(flag){
      v.push_back(i);
      if(i >= X){
	break;
      }
    }
    i++;
  }
  cout << i << endl;
}
