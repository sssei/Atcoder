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
  vector<string> S(N);
  vector<ll> rec(5);  
  for(int i = 0; i < N; ++i){
    cin >> S[i];
    switch(S[i][0]){
    case 'M':
      rec[0]++;
      break;
    case 'A':
      rec[1]++;
      break;
    case 'R':
      rec[2]++;
      break;
    case 'C':
      rec[3]++;
      break;
    case 'H':
      rec[4]++;
      break;
    }
  }
  ll ans = 0;
  for(int i = 0; i <= 2; i++){
    for(int j = i + 1; j <= 3; j++){
      for(int k = j + 1; k <= 4; k++ ){
	ans += rec[i] * rec[j] * rec[k];
      }
    }
  }

  cout << ans << endl;

}
