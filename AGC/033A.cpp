#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main(){
  int H,W; cin >> H >> W;
  vector < vector < char > > A(H,vector<char>(W));
  vector < vector <int> > idx;
  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
      cin >> A[i][j];
      if(A[i][j] == '#'){
	vector<int> tmpvec={i,j};
	idx.push_back(tmpvec);
      }
    }
  }
  int ans = 0;
  bool flag = true;
  while(flag){
    vector <int> idx;
    bool flag2 = false;
    for(int i = 0; i < H; i++){
      for (int j = 0; j < W; j++){
	if (A[i][j] != '#'){
	  flag2 = true;
	  flag = false;
	  ans++;
	  break;
	}
      }
      if(flag2) break;
    }
    for (int l = 0; l  < (int)idx.size(); l++){
      for (int k = 0; k <= ans; k++){
	if((idx[l][0]+k != 0) && (idx[l][0]+k != H-1)){
	  if((idx[l][1]+n-k != 0) && (idx[l][1]+n-k != W-1)) A[idx[l][0]+k][idx[l][1]+n-k] = '#';
	  if((idx[l][1]-n+k != 0) && (idx[l][1]-n+k != W-1)) A[idx[l][0]+k][idx[l][1]-n+k] = '#';
	}
      }
    }
  }
  cout << ans << endl;
}

