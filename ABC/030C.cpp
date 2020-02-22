#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N,M;
  ll X,Y;
  cin >> N >> M >> X >> Y;
  vector<ll> a(N);
  vector<ll> b(M);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  for(int i = 0; i < M; i++){
    cin >> b[i];
  }
  ll res = 0;
  ll time = 0;
  int id_a = 0, id_b = 0;
  while(id_a < N && id_b < M){
    while(id_a < N && time > a[id_a]){
      id_a++;
    }
    if(id_a == N) break;
    time = a[id_a] + X;
    id_a++;
    while(id_b < M && time > b[id_b]){
      id_b++;
    }
    if(time > b[id_b]) break;
    time = b[id_b] + Y;
    id_b++;
    res++;
  }
  cout << res << endl;
}
