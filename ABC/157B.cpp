#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
typedef long long ll;
const int MOD = 1000000007;

int main(){
  vector<vector<int>> A(3, vector<int>(3, 0));
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cin >> A[i][j];
    }
  }
  int N;
  cin >> N;
  for(int i = 0; i < N; i++){
    int b;
    cin >> b;
    for(int k = 0; k < 3; k++){
      for(int j = 0; j < 3; j++){
	if(A[k][j] == b){
	  A[k][j] = -1;
	}
      }
    }
  }
  bool flag = false;
  for(int i = 0; i < 3; i++){
    if(A[i][0] == -1 && A[i][1] == -1 && A[i][2] == -1){
      flag = true;
    }
  }
  for(int i = 0; i < 3; i++){
    if(A[0][i] == -1 && A[1][i] == -1 && A[2][i] == -1){
      flag = true;
    }
  }
  if(A[0][0] == -1 && A[1][1] == -1 && A[2][2] == -1){
    flag = true;
  }
  if(A[2][0] == -1 && A[1][1] == -1 && A[2][0] == -1){
    flag = true;
  }
  if(flag){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
