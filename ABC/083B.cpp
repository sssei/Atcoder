#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int n,a,b;
  cin >> n >> a >> b;
  int cnt = 0;
  for(int i = 1; i <= n; ++i){
    int sum = 0;
    int t = i;
    while(t){
      int tmp = t % 10;
      sum += tmp;
      t = t /10;
    }
    if(sum >= a && sum <= b) cnt += i;
  }
  cout << cnt << endl;


}
