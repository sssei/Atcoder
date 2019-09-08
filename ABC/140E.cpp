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
  vector<int> P(N+1);
  for(int i = 0; i < N; ++i){
    int tmp;
    cin >> tmp;
    P[tmp] = i+1;
  }
  set<int> r;
  ll ans = 0;
  ans += (N-max(P[N],P[N-1]) + 1) * min(P[N],P[N-1]) * (N-1);
  r.insert(P[N]);
  r.insert(P[N-1]);
  int a = max(P[N], P[N-1]);
  int b = min(P[N], P[N-1]);
  if(b < P[N-2]){
    ans += P[N-2] * (b-a) * (N-2);
  }else if(a < P[N-2]){
    ans += (N-P[N-2]+1) * (b-a) * (N-2);
  }else{
    ans += (b-P[N-2]) * (P[N-2]-a) * (N-2);
  }
  for(int i = N-3; i > 0; --i){
    auto itr = r.upper_bound(P[i]);
    auto itr2 = itr;
    int r1 = *itr;
    int r2 = *(itr++);
    int l1 = *(itr--);
    int l2 = *(itr--);
    int pt = P[i];
    ans += (r1 - pt) * (l1 - l2) + (pt - l1) * (r2 - r1) * i;
    r.insert(pt);
  }
  cout << ans << endl;
}
