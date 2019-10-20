#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  string S;
  cin >> N >> S;
  int cnt = 1;
  for(int i = 1; i < N; ++i){
    if(S[i] != S[i-1]) cnt++;
  }
  cout << cnt << endl;
}
