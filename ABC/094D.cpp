#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int a_i = a[n-1];
  int res = a[0];
  for(int i = 0; i < n-1; i++){
    int tmp1 = min(a_i - res, res);
    int tmp2 = min(a_i - a[i], a[i]);
    if(tmp1 < tmp2){
      res = a[i];
    }
  }
  cout << a_i << " " << res << endl;
}
