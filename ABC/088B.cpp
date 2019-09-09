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
  vector<int> a(N);
  for(int i = 0; i < N; ++i){
    cin >> a[i];
  }
  sort(a.begin(), a.end(), greater<int>());
  ll alice = 0;
  ll bob = 0;
  for(int i = 0; i < N; ++i){
    if(i % 2 == 0){
      alice += a[i];
    }else{
      bob += a[i];
    }
  }
  cout << alice - bob << endl;
}
