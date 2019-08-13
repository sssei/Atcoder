#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N, D;

double dis(int i, int j,vector< vector<int> > vec){
  double res = 0;
  for(int k = 0; k < D; k++){
    res += pow(vec[i][k] - vec[j][k], 2);
  }
  return sqrt(res);
}

int main(){
  cin >> N >> D;
  vector< vector<int> > X(N, vector<int>(D));
  
  for(int i = 0; i < N; i++){
    for(int j = 0; j < D; j++){
      cin >> X[i][j];
    }
  }

  int cnt = 0;
  for(int i = 0; i < N - 1; i++){
    for(int j = i + 1; j < N; j++){
      double res = dis(i,j,X);
      double res2 = (double)((int)res);
      if(res == res2) cnt++;
    }
  }
  cout << cnt << endl;
}
