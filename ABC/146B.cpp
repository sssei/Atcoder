#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  string S;
  cin >> S;
  for(int i = 0; i < S.size(); i++){
    char idx = S[i];
    idx += N;
    if(idx > 90){
      idx -= 26;
    }
    S[i] = idx;
  }
  cout << S << endl;
}
