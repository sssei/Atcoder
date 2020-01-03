#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll N,H;
  cin >> N >> H;
  priority_queue<ll> a, b;

  for(int i = 0; i < N; i++){
    ll tmp1, tmp2;
    cin >> tmp1 >> tmp2;
    a.push(tmp1);
    b.push(tmp2);
  }

  ll cnt = 0;
  int b_cnt = N;
  while(H > 0){
    if(b_cnt > 0){
      if(a.top() <= b.top()){
	H -= b.top();
	b.pop();
	cnt++;
	b_cnt--;
      }else{
	H -= a.top();
	cnt++;
      }
    }else{
      H -= a.top();
      cnt++;
    }
  }

  cout << cnt << endl;
  
}
