#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }

  int j = 1;
  int cnt = 0;
  for(int i = 0; i < N; i++){
    if(a[i] != j){
      cnt++;
    }else{
      j++;
    }
  }
  if(cnt == N){
    cout << -1 << endl;
  }else{
    cout << cnt << endl;
  }
}
