#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  vector<int> x(100005);
  for(int i = 0; i < N; i++){
    if(a[i] == 0){
      x[1]++;
    }else{
      x[a[i]-1]++;
      x[a[i]]++;
      x[a[i]+1]++;
    }
  }
  cout << *max_element(x.begin(), x.end()) << endl;
}
