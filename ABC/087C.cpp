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
  vector<int> a(N),b(N);
  for(int i = 0; i < N; ++i){
    cin >> a[i];
  }
  int bSum = 0;
  for(int i = 0; i < N; ++i){
    cin >> b[i];
    bSum += b[i];
  }
  int res = bSum + a[0];
  int tmpMax = res;
  for(int i = 1; i < N; ++i){
    res = res - b[i-1] + a[i];
    if(tmpMax < res) tmpMax = res;
  }
  cout << tmpMax << endl;
  
}
