#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> a(N);
  for(int i = 0; i < N; ++i){
    cin >> a[i];
  }
  int b[M][2];
  for(int i = 0; i < M; ++i){
    cin >> b[i][0] >> b[i][1];
  }
  sort(a.begin(), a.end());


}
