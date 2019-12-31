#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int N;
  cin >> N;
  vector< pair<int, int> > A[N];
  
  for(int i = 0; i < N; i++){
    int n;
    cin >> n;
    pair<int, int> a;
    for(int j = 0; j < n; j++){
      cin >> a.first >> a.second;
      a.first--; 
      A[i].push_back(a);
    }
  }

  int res = 0;
  
  for(int i = 0; i < (1 << N); i++){
    vector<int> people(N, 0);
    int num = 0;
    bool flag = true;

    for(int j = 0; j < N; j++){
      if((i >> j) & 1){
	people[j] = 1;
	num++;
      }
    }

    for(int j = 0; j < N; j++){
      if(people[j] == 1){
	for(auto x: A[j]){
	  if(people[x.first] != x.second){
	    flag = false;
	  }
	}
      }
    }

    if(flag){
      res = max(num, res);
    }
  }

  cout << res << endl;
}
