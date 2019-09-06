#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int n,m,x;
  cin >> n >> m >> x;
  vector<int> a(m);
  for(int i = 0; i < m; ++i){
    cin >> a[i];
  }
  auto it = lower_bound(a.begin(), a.end(), x);
  int id = it - a.begin();
  int ans = min(id, m-id);
  cout << ans << endl;
}
