#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  ll x,y;
  cin >> x >> y;
  ll cnt = 0;
  while(x <= y){
    x *= 2;
    cnt++;
  }
  cout << cnt << endl;
}
