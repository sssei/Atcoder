#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
  
  int N,M; cin >> N >> M;
  vector<vector< int > > vec(M);
  
  for (int i = 0; i < M; i++){
    int k; cin >> k;
    vec[i].resize(k);
    for(int j = 0; j < k; j++){
      cin >> vec[i][j];
    }
  }

  vector <int> p(M);
  for(int i = 0; i < M; i++){
    cin >> p[i];
  }

  int ans = 0;

  for(int i = 0; i < (1 << N); i++){
    bool flag = true;
    for (int j = 0; j < M; j++){
      int cnt = 0;
      for(auto x: vec[j]){
	if((i >> (x-1)) & 1){
	  cnt++;
	}
      }
      if((cnt%2) != p.at(j)) flag = false;
    }
    if(flag) ans++;
  }

  cout << ans << endl;
}
