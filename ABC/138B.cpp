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
  for(int i = 0; i < N; i++) cin >> A[i];
  double ans = 0;
  for(int i = 0; i < N; i++){
    ans += 1.0 / A[i];
  }
  cout << 1/ans << endl;
}
