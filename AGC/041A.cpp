#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  ll N, A, B;
  cin >> N >> A >> B;
  ll dis = B - A;
  if(dis % 2 == 0){
    cout << dis / 2 << endl;
  }else{
    ll l = (A + B - 1) / 2 ;
    ll r = (N - B + 1 + N - A) / 2;
    cout << min(l, r) << endl;
  }
}
