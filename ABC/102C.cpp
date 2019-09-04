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
  vector<int> A(N);
  for(int i = 0; i < N; ++i){
    cin >> A[i];
    A[i] -= i+1;
  }
  sort(A.begin(), A.end());
  int b = A[N/2];
  ll ans = 0;
  for(int i = 0; i < N; ++i){
    ans += abs(b-A[i]);
  }
  cout << ans << endl;
  
}
