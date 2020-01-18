#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  ll N,K,S;
  cin >> N >> K >> S;
  if(S == 1000000000){
    for(int i = 0; i < N; i++){
      if(i < K){
	cout << S << " ";
      }else{
	cout << S - 1 << " ";
      }
    }
    cout << endl;
  }else{
    for(int i = 0; i < N; i++){
      if(i < K){
	cout << S << " ";
      }else{
	cout << S + 1 <<  " ";
      }
    }
    cout << endl;
  }
}
