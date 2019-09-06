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
  vector<int> x(N),y(N);
  for(int i = 0; i < N; ++i){
    cin >> x[i];
    y[i] = x[i];
  }
  sort(x.begin(), x.end());
  int c1 = x[N/2-1];
  int c2 = x[N/2];
  for(int i = 0; i < N; ++i){
    if(y[i] <= c1) cout << c2 << endl;
    else cout << c1 << endl;
  }

}
