#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  vector<bool> color(8, false);
  int red = 0;
  for(int i = 0; i < N; i++){
    cin >> a[i];
    if(a[i] < 400){
      color[0] = true;
    }else if(a[i] < 800){
      color[1] = true;
    }else if(a[i] < 1200){
      color[2] = true;
    }else if(a[i] < 1600){
      color[3] = true;
    }else if(a[i] < 2000){
      color[4] = true;
    }else if(a[i] < 2400){
      color[5] = true;
    }else if(a[i] < 2800){
      color[6] = true;
    }else if(a[i] < 3200){
      color[7] = true;
    }else{
      red++;
    }
  }
  int cnt = 0;
  for(int i = 0; i < 8; i++){
    if(color[i]) cnt++;
  }
  cout << max(cnt, 1) << " " << cnt + red << endl;
}
