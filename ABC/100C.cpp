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
  int cnt = 0;
  for(int i = 0; i < N; ++i){
    int c = a[i];
    while(c % 2 == 0){
      c /= 2;
      cnt++;
    }
  }
  cout << cnt << endl;
}
