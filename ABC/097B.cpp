#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int ipow(int a, int b){
  int ans = 1;
  for(int i = 0; i < b; ++i){
    ans *= a;
  }
  return ans;
}

int main(){
  int X;
  cin >> X;
  int ans = 0;
  for(int i = 0; i <= 100; ++i){
    for(int j = 2; j <= 100; ++j){
      if(ipow(i,j) > X) break;
      ans = max(ans, ipow(i, j));
    }
  }
  cout << ans << endl;
}
