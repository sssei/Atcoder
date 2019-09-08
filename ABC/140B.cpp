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
  vector<int> a(N),b(N),c(N-1);
  for(int i = 0; i < N; ++i){
    cin >> a[i];
  }
  for(int i = 0; i < N; ++i){
    cin >> b[i];
  }
  for(int i = 0; i < N-1; ++i){
    cin >> c[i];
  }
  int cnt = 0;
  for(int i = 0; i < N; ++i){
    cnt += b[a[i]-1];
  }
  for(int i = 0; i < N-1; ++i){
    if(a[i+1] == a[i] + 1){
      cnt += c[a[i]-1];
    }
  }
  cout << cnt << endl;
}
