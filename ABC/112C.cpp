#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

static const ll INF = 10000000000;
  
int main(){
  int N;
  cin >> N;
  ll xyh[N][3];
  for(int i = 0; i < N; ++i){
    cin >> xyh[i][0] >> xyh[i][1] >> xyh[i][2];
  }
  ll ans[3];
  for(int x = 0; x <= 100; ++x){
    for(int y = 0; y <= 100; ++y){
      ll maxH = INF;
      ll H = -1;
      bool flag = true;
      for(int i = 0; i < N; ++i){
	if(xyh[i][2] == 0 && maxH > 0){
	  maxH = min(maxH, abs(xyh[i][0]-x) + abs(xyh[i][1]-y));
	}else{
	  if(H == -1){
	    H = xyh[i][2] + abs(xyh[i][0]-x) + abs(xyh[i][1]-y);
	  }else{
	    if(H != xyh[i][2] + abs(xyh[i][0]-x) + abs(xyh[i][1]-y)){
	      flag = false;
	    }
	  }
	}
      }
      if(H > maxH) flag = false;
      if(flag){
	ans[0] = x;
	ans[1] = y;
	ans[2] = H;
      }
    }
  }
  for(int i = 0; i < 3; ++i){
    cout << ans[i] << " ";
  }
  cout << endl;
}
