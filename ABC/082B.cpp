#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  string s,t;
  cin >> s >> t;
  sort(s.begin(), s.end());
  sort(t.rbegin(), t.rend());
  if(s < t) cout << "Yes" << endl;
  else cout << "No" << endl;
}
