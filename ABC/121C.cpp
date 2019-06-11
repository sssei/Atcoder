#include <cstdio>
#include <iostream>

using namespace std;

int search(vector< vector<int> > vec, int n){
  int min_v = 0;
  for (int i = 1; i < n; i++){
    if(vec[i][0] < vec[i-1][0]){
      min_v = i;
    }
  }
  return min_v;
}

int main(){
  int N,M;
  scanf("%d %d",&N,&M);
  vector< vector<int> > vec(N,vector<int>(2));
  for(int i = 0; i < N; i++ ){
    scanf("%d %d",vec[i][0],vec[i][1]);
  }
  int m;
  int ans = 0;
  while(){
    m = search(vec, N);
    N--;
    vec.erase(vec.begin() + m);
    ans += vec[m][0] * vec[m][1];
  }
  ans -= vec[m][0] * vec[m][1];
  while(
}




