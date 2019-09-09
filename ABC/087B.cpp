#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int a,b,c,x;
  cin >> a >> b >> c >> x;
  int c500 = x / 500;
  int ans = 0;
  for(int i = 0; i <= c500 && i <= a; i++){
    int tmp = x - 500 * i;
    tmp = tmp / 100;
    for(int j = 0; j <= tmp && j <= b; ++j){
      int tmp2 = (x - 500 * i - 100 * j)/50;
      if(tmp2 <= c) ans++;
    }
  }
  cout << ans << endl;
}
