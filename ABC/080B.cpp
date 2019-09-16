#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  int tmp = N;
  int res = 0;
  while(tmp){
    res += tmp % 10;
    tmp /= 10;
  }
  if(N % res == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
}
