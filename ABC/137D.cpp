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
  vector<pair<int,int> > a(N);
  vector<int> rec(M+1);
  for(int i = 0; i < N; ++i){
    cin >> a[i].second >> a[i].first;
  }

  ll sum = 0;
  sort(a.rbegin(), a.rend());
  int date = 1;
  for(int i = 0; i < N; ++i){
    
  }
  for(int i = 0; i < N; ++i){
    cout << "a[" << i << "]" << ": " << a[i].first << " " << a[i].second << endl;
  }

}
