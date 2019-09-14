#include <queue>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <utility>
typedef long long ll;
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> q[M];
  priority_queue<int> m;
  for(int i = 0; i < N; ++i){
    int a,b;
    cin >> a >> b;
    a--;
    if(a < M){
      q[a].push_back(b);
    }
  }
  ll sum = 0;
  for(int i = 0; i < M; ++i){
    for(auto x: q[i]){
      m.push(x);
    }
    if(!m.empty()){
      sum += m.top();
      m.pop();
    }
  }
  cout << sum << endl;


  
}
