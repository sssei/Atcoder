#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int A,B,C,D,E,F;
  cin >> A >> B >> C >> D >> E >> F;
  pair<int,int> p = make_pair(0,1);
  for(int a = 0; a <= 30; ++a){
    for(int b = 0; b <= 30; ++b){
      int water = A * a + B * b;
      for(int c = 0; c <= F-100*water; c++){
	for(int d = 0; d <= F-100*water-C*c; d++){
	  int sugar = C * c + D * d;
	  if(100 * water + sugar > F) continue;
	  if(water * E < sugar) continue;
	  if(sugar * p.second >= water * p.first){
	    p.first = sugar;
	    p.second = water;
	  }
	}
      }
    }
  }
  cout << 100 * p.second + p.first << " " << p.first << endl;
}
