#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;
const int MAX = 1000000000;

int main(){
  int N;
  cin >> N;
  vector< pair<int, int> > L(N);
  for(int i = 0; i < N; i++){
    int x,l;
    cin >> x >> l;
    L[i].first = x + l;
    L[i].second = x - l;
  }
  sort(L.begin(), L.end());
  int res = 1;
  int idx = 0;
  for(int i = 1; i < N; i++){
    if(L[i].second < L[idx].first){
      continue;
    }else{
      res++;
      idx = i;
    }
  }
  cout << res << endl;
}
