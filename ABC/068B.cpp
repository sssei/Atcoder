#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  int cnt = 0;
  int res = 1;
  while(N >= res){
    res *= 2;
    cnt++;
  }
  cout << res / 2 << endl;
}
