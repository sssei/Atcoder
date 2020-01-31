#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  vector<int> bell(3);
  cin >> bell[0] >> bell[1] >> bell[2];
  sort(bell.begin(), bell.end());
  cout << bell[0] + bell[1] << endl;
}
