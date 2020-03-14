#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
typedef long long ll;
const int MOD = 1000000007;

class UnionFind{
public:
  vector<ll> par; //親を表す配列
  vector<ll> siz; //各集合のサイズ
  vector<ll> amt; //各集合の要素数
  UnionFind(ll n): par(n), siz(n, 1LL), amt(n, 1LL){
    for(ll i = 0; i < n; i++) par[i] = i;
  }
  ll root(ll x){
    return par[x] == x ? x : par[x] = root(par[x]);
  }
  bool unite(ll x, ll y){
    x = root(x);
    y = root(y);
    ll x_amt = amt[x];
    ll y_amt = amt[y];
    if(x == y) return false;
    if(siz[x] < siz[y]){
      par[x] = y;
      amt[y] = x_amt + y_amt;
    }else{
      par[y] = x;
      if(siz[x] == siz[y]) siz[x]++;
      amt[x] = x_amt + y_amt;
    }
    return true;
  }
  bool same(ll x, ll y){
    return root(x) == root(y);
  }
  ll amount(ll x){
    return amt[root(x)];
  }
};

int main(){
  
}
