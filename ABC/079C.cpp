#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  string tmp;
  cin >> tmp;
  vector<int> a(4);
  for(int i = 0; i < 4; ++i){
    a[i] = tmp[i] - '0';
  }

  int res = 0;
  for(int i = 0; i < 1 << 4; ++i){
    int res = a[0];
    for(int j = 1; j < 4; ++j){
      int op = (i >> j) & 1;
      if(op) res += a[j];
      else res -= a[j];
    }
    if(res == 7){
      cout << a[0];
      for(int j = 1; j < 4; ++j){
	int op = (i >> j) & 1;
	if(op) cout << "+" << a[j];
	else cout << "-" << a[j];
      }
      break;
    }
  }
  cout << "=7"<<  endl;
  
  
}
