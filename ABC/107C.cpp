#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<ll> x(N);  
  for(int i = 0; i < N; i++) cin >> x[i];

  ll gap = x[K-1] - x[0];
  for(int i = 0; i < N-K+1; i++){
    gap = min(gap, x[i+K-1] - x[i]);
    cout << "gap" << gap << endl;
  }

  cout << gap << endl;
  
}
