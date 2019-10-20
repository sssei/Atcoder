#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  vector<int> x(N);
  int res = 0;
  for(int i = 0; i < N; ++i){
    int tmp;
    cin >> tmp;
    res += 2 * min(tmp, K-tmp);
  }
  cout << res << endl;
    
}
