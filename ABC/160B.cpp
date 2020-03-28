#include <bits/stdc++.h>
#define COUT(x) cout << #x << " = " << (x) << ", "
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  ll X; cin >> X;
  int tmp1 = X / 500;
  X = X % 500;
  int tmp2 = X / 5;
  cout << tmp1 * 1000 + tmp2 * 5 << endl;
}
