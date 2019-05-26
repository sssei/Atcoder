#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <bitset>
#include <sstream>

using namespace std;


int main(){
  int N,M; cin >> N >> M;
  vector <vector <int> > vec(M);
  for(int i = 0; i < M; i++){
    int k; cin >> k;
    vector <int> v(k);
    for(j = 0; j < k; j++){
      cin >> v[j];
    }
  }
  vector <int> p(M);
  for(int i = 0; i < M; i++){
    cin >> p[i];
  }

  vector <int> s(N);
  for(int i = 0; i < (int)pow(2,N), i++){
    for(int j = 0; j < N; j++){
      if((i/pow(2,j))%2 == 1){
	s[j] = 1;
      }else{
	s[j] = 0;
      }
    }
    for(int k = 0; k < M; k++){
       
    }
  }
}
