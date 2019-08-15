#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

int main(){
  int N, X;
  cin >> N >> X;
  vector<int> L(N);
  for(int i = 0; i < N; i++) cin >> L[i];
  int cnt = 1;
  int d = 0;
  for(int i = 0; i < N; i++){
    d += L[i];
    if(d > X) break;
    cnt++;
  }
  cout << cnt << endl;
}
