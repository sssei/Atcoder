#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int N;
  cin >> N;
  vector<int> p(N);
  
  for(int i = 0; i < N; i++){
    cin >> p[i];
  }

  int cnt = 0;
  for(int i = 0; i < N; i++){
    if(p[i] == i + 1){
      cnt++;
      i++;
    }
  }
  cout << cnt << endl;
}
