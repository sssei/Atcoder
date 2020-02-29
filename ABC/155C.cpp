#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  vector<string> S(N);
  map<string, int> m;
  for(int i = 0; i < N; i++){
    cin >> S[i];
    m[S[i]]++;
  }
  int res = 0;
  for(auto itr = m.begin(); itr != m.end(); itr++){
    res = max(res, itr->second);
  }
  for(auto itr = m.begin(); itr != m.end(); itr++){
    if(itr->second == res){
      cout << itr->first << endl;
    }
  }
}
