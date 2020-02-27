#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N, M;
  cin >> N >> M;
  int a,b,c;
  b = 0;
  for(int i = 0; i <= N; i++){
    a = i;
    c = N - a;
    if(a * 2 + c * 4 == M){
      cout << a << " " << b << " " << c << endl;
      return 0;
    }
  }
  b = 1;
  for(int i = 0; i < N; i++){
    a = i;
    c = N - 1 - a;
    if(a * 2 + 3 + c * 4 == M){
      cout << a << " " << b << " " << c << endl;
      return 0;
    }
  }
  cout << "-1 -1 -1" << endl;
}
