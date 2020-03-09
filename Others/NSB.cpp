#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  int A,B,M;
  cin >> A >> B >> M;
  vector<int> a(A);
  vector<int> b(B);
  int minA = MOD, minB = MOD;
  for(int i = 0; i < A; i++){
    cin >> a[i];
    if(a[i] < minA) minA = a[i];
  }
  for(int i = 0 ; i < B; i++){
    cin >> b[i];
    if(b[i] < minB) minB = b[i];
  }
  int res = minA + minB;
  for(int i = 0; i < M; i++){
    int x,y,c;
    cin >> x >> y >> c;
    int tmp = a[x-1] + b[y-1] - c;
    if(tmp < res){
      res = tmp;
    }
  }
  cout << res << endl;
}
