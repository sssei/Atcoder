#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <numeric>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> b(N-1);
  for(int i = 0; i < N-1; ++i){
    cin >> b[i];
  }
  vector<int> a(N);
  a[0] = b[0];
  a[N-1] = b[N-2];
  for(int i = 1; i <= N-2; ++i){
    a[i] = min(b[i-1], b[i]);
  }
  cout << accumulate(a.begin(), a.end(), 0) << endl;
}
