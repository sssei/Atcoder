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
  vector<int> A(N);
  for(int i = 0; i < N; ++i){
    cin >> A[i];
  }
  N--;
  int ans = (N + K - 2) / (K - 1);
  cout << ans << endl;
}
