#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int n;
  int d,x;
  cin >> n;
  cin >> d >> x;
  vector<int> a(n);
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  int cnt = 0;
  for(int i = 0; i < n; ++i){
    int day = 1;
    while(day <= d){
      cnt++;
      day += a[i];
    }
  }
  cout << cnt + x << endl;
}
