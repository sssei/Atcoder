#include <bits/stdc++.h>
#define COUT(x) cout << #x << " = " << (x) << ", "
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  int N,M;
  cin >> N >> M;
  int tmp = N * (N - 1) / 2 + M * (M - 1) / 2;
  cout << tmp << endl;
}
