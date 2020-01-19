#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> P(N);
  for(int i = 0; i < N; i++){
    cin >> P[i];
  }
  int minP = P[0];
  int cnt = 0;
  for(int i = 0; i < N; i++){
    if(P[i] <= minP){
      cnt++;
      minP = P[i];
    }
  }
  cout << cnt << endl;
}
