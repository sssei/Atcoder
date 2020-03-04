#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
typedef long long ll;
const int MOD = 1000000007;

int R,S,P;
int pt(char a){
  if(a == 'r'){
    return P;
  }else if(a == 's'){
    return R;
  }else{
    return S;
  }
}

int main(){
  int N,K;
  cin >> N >> K;

  cin >> R >> S >> P;
  string T;
  cin >> T;
  ll res = 0;
  vector<bool> flag(N, true);
  for(int i = 0; i < N; i++){
    if(i < K) res += pt(T[i]);
    else{
      if(T[i] == T[i-K]){
	if(flag[i-K]){
	  flag[i] = false;
	}else{
	  res += pt(T[i]);
	}
      }else{
        res += pt(T[i]);
      }
    }
  }
  cout << res << endl;
}
