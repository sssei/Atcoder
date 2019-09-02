#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <map>
typedef long long ll;
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; ++i) cin >> v[i];
  map<int, int> m1, m2;
  for(int i = 0; i < n; ++i){
    if(i%2) m1[v[i]]++;
    else m2[v[i]]++;
  }

  int e1=0 , e2=0, o1=0 , o2=0;
  int even1, even2, odd1, odd2;
  for(auto itr = m1.begin(); itr != m1.end(); ++itr){
    if(itr->second > e1){
      e1 = itr->second;
      even1 = itr->first;
    }
  }
  for(auto itr = m1.begin(); itr != m1.end(); ++itr){
    if(itr->second > e2 && itr->first != even1){
      e2 = itr->second;
      even2 = itr->first;
    }
  }
  for(auto itr = m2.begin(); itr != m2.end(); ++itr){
    if(itr->second > o1){
      o1 = itr->second;
      odd1 = itr->first;
    }
  }
  for(auto itr = m2.begin(); itr != m2.end(); ++itr){
    if(itr->second > o2 && itr->first != odd1){
      o2 = itr->second;
      odd2 = itr->first;
    }
  }

  if(even1 != odd1){
    cout << n - e1 - o1 << endl;
  }else{
    int ans = max(e1+o2, e2+o1);
    cout << n - ans << endl;
  }

}
