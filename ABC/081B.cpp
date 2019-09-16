#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  int minD = 100;
  for(int i = 0; i < N; ++i){
    cin >> a[i];
    int tmp = a[i];
    int d = 0;
    while(tmp%2 == 0){
      tmp /= 2;
      d++;
    }
    minD = min(minD, d);
  }
  cout << minD << endl;
  

}
