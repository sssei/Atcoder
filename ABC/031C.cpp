#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  int res = -MOD;
  int tt, aa;
  for(int i = 0; i < N; i++){
    int tmp = -MOD;
    int tmp2;
    int tmpaa;
    for(int j = 0; j < N; j++){
      if(j == i) continue;
      int taka = 0;
      int aoki = 0;
      int idx = 0;
      for(int k = min(i,j); k <= max(i,j); k++){
	if(idx % 2 == 0) taka += a[k];
	else aoki += a[k];
	idx++;
      }
      if(tmp < aoki){
	tmp = aoki;
	tmp2 = taka;
	tmpaa = j;
      }
    }
    if(res < tmp2){
      tt = i;
      aa = tmpaa;
      res = tmp2;
    }
  }
  cout << res << endl;
}
