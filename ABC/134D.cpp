#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  vector<int> box(N);
  for(int i = 0; i < N; ++i){
    cin >> a[i];
  }
  vector<int> d(N);
  for(int i = N; i > 0; --i){
    int tmp = i * 2;
    int res = 0;
    while(tmp <= N){
      res += a[i];
      tmp += i;
    }
    if(res%2 != a[i-1]) d[i-1]++;
  }

  vector<int> v;
  for(int i = 0; i < N; ++i){
    if(d[i] == 1) v.push_back(i+1);
  }
  cout << v.size() << endl;
  for(auto x: v){
    cout << x << " ";
  }
  cout << endl;
  
}
