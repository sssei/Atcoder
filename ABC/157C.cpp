#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> S(3,-1);
  bool flag = true;
  for(int i = 0; i < M; i++){
    int s,c;
    cin >> s >> c;
    if(S[s+2-N] == -1){
      S[s+2-N] = c;
    }else{
      if(S[s+2-N] != c){
	cout << -1 << endl;
	return 0;
      }
    }
  }
  if(N != 1 && S[3-N] == 0){
    cout << -1 << endl;
    return 0;
  }
  for(int i = 3-N; i < 3; i++){
    if(S[i] == -1){
      if(i == 3-N && N > 1){
	cout << 1;
      }else{
	cout << 0;
      }
    }else{
      cout << S[i];
    }
  }
  cout << endl;
}
