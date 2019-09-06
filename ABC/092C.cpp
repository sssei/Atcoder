#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n+2);
  a[0] = 0;
  a[n+1] = 0;
  for(int i = 1; i <= n; ++i){
    cin >> a[i];
  }
  int ptr = a[0];
  ll cost = 0;
  for(int i = 0; i <= n; ++i){
    cost += abs(a[i] - a[i+1]);
  }

  for(int i = 1; i <= n; ++i){
    ll ans = cost;
    ans -= abs(a[i]-a[i-1]) + abs(a[i]-a[i+1]);
    ans += abs(a[i-1] - a[i+1]);
    cout << ans << endl;
  }


  
}
