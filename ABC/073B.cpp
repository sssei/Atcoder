#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N;
  int res = 0;
  for(int i = 0; i < N; i++){
    int l,r;
    cin >> l >> r;
    res += r - l + 1;
  }
  cout << res << endl;
}
