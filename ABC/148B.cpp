#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int N;
  cin >> N;
  string S,T;
  cin >> S >> T;
  for(int i = 0; i < N; i++){
    cout << S[i] << T[i];
  }
  cout << endl;
}
