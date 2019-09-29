#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; ++i){
    cin >> a[i];
  }
  vector<int> d(N);
  int M = 0;
  for(int i = N; i > 0; --i){
    int tmp = i;
    int cnt = 0;
    while(tmp <= N){
      cnt += d[tmp-1];
      tmp += i;
    }
    if(cnt%2 != a[i-1]) d[i-1] = 1, M++;
  }
  cout << M << endl;
  for(int i = 0; i < N; ++i){
    if(d[i] == 1) cout << i+1 << " ";
  }
  cout << endl;
}
