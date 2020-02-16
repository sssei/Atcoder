#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int T,N;
  cin >> T >> N;
  vector<int> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  int M;
  cin >> M;
  vector<int> b(M);
  for(int i = 0; i < M; i++){
    cin >> b[i];
  }
  int j = 0;
  bool flag = true;
  for(int i = 0; i < M; i++){
    // cout << "yyyy" << i << endl;
    bool f = false;
    while(j < N){
      if(a[j] + T >= b[i] && b[i] >= a[j] ){
	// cout << "i,j=" << i << " " << j << "a[j] + T" << a[i] << " " << T << endl;
	j++;
	f = true;	
	break;
      }
      // cout << "i,j=" << i << " " << j << "a[j], b[i]=" << a[j] << " " << b[i] << endl;      
      j++;
    }
    if(f == false){
      // cout << "  i , j = " << i << " " << j << endl;
      flag = false;
      break;
    }
  }
  if(flag){
    cout << "yes" << endl;
  }else{
    cout << "no" << endl;
  }
}
