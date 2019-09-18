#include <iostream>
typedef long long ll;
using namespace std;

int N;

ll dfs(ll a, ll b, ll c, ll n){
  if(n > N) return 0;
  ll res = 0;
  if(a > 0 && b > 0 && c > 0) res = 1;
  res += dfs(a + 1, b, c, 10 * n + 3);
  res += dfs(a, b + 1, c, 10 * n + 5);
  res += dfs(a, b, c + 1, 10 * n + 7);
  return res;
}

int main(){
  cin >> N;
  cout << dfs(0,0,0,0) << endl;
  
}



