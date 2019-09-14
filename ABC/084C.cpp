#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  int x[N-1][3];
  for(int i = 0; i < N-1; ++i){
    cin >> x[i][0] >> x[i][1] >> x[i][2];
  }
  for(int j = 0; j < N; ++j){
    int t = 0;
    for(int i = j; i < N-1; ++i){
      if(t < x[i][1]){
	t = x[i][1] + x[i][0];
      }else if(t % x[i][2] == 0){
	t += x[i][0];
      }else{
	int gap = t % x[i][2];
	t += x[i][2] - gap;
	t += x[i][0];
      }
    }
    cout << t << endl;
  }


}
