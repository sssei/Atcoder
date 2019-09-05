#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  string S;
  cin >> S;
  int cnt = 0;
  for(int i = 1; i < N; ++i){
    if(S[i] == 'W') cnt++;
  }
  int ans = cnt;
  for(int i = 1; i < N; ++i){
    if(S[i] == 'W') cnt--;
    if(S[i-1] == 'E') cnt++;
    ans = max(ans, cnt);
  }
  cout << N - 1 - ans << endl;
}
