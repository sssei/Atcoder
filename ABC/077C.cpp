#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N),b(N),c(N);
  for(int i = 0; i < N; ++i){
    cin >> a[i];
  }
  for(int i = 0; i < N; ++i){
    cin >> b[i];
  }
  for(int i = 0; i < N; ++i){
    cin >> c[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());

  vector<ll> dpB(N);
  vector<ll> dpC(N);

  int ptr = 0;
  for(int i = 0; i < N; ++i){
    while(a[ptr] < b[i] && ptr < N) ptr++;
    if(i == 0) dpB[i] = ptr;
    else dpB[i] = dpB[i-1] + ptr;
  }
  ptr = 0;
  for(int i = 0; i < N; ++i){
    while(b[ptr] < c[i] && ptr < N) ptr++;
    ptr--;
    if(i == 0) dpC[i] = dpB[ptr];
    else dpC[i] = dpC[i-1] + dpB[ptr];
  }
  cout << dpC[N-1] << endl;
}
