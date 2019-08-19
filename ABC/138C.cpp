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
  vector<double> v(N);
  for(int i = 0; i < N; i++) cin >> v[i];

  sort(v.begin(), v.end());
  for(int i = 0; i < N-1; i++){
    v[i+1] = (v[i] + v[i+1])/2.0;
  }

  cout << v[N-1] << endl;
  
}
