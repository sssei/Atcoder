#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

struct pt{
  int x,y;
  bool operator <(const& pt)const{
    return x < pt.x && y < pt.y;
  }
};

int main(){
  int N;
  cin >> N;
  vector<pt> a(N),c(N);
  for(int i = 0; i < N; ++i){
    cin >> a[i].x >> a[i].y;
  }
  for(int i = 0; i < N; ++i){
    cin >> c[i].x >> c[i].y;
  }
  for(int i = 0; i < )

}
