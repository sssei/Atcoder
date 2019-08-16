#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <cstdlib>
#include <numeric>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> W(N);
  for(int i = 0; i < N; i++) cin >> W[i];
  int T[N-1];
  int sum = accumulate(W.begin(), W.end(), 0);
  T[0] = sum - 2 * W[0];
  for(int i = 1; i < N-1; i++){
    T[i] = T[i-1] - 2 * W[i];
  }
  int minT = abs(T[0]);
  for(int i = 0; i < N-1; i++){
    minT = min(minT, abs(T[i]));
  }
  cout << minT << endl;

}
