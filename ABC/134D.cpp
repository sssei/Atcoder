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
  vector<int> d[N];
  for(int i = 1; i <= N; ++i){
    int t = 1;
    while(t <= N){
      d[i].push_back(t);
      t += i;
    }
  }


}
