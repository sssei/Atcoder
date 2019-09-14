#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  int xy[N+1][3];
  xy[0][0] = xy[0][1] = xy[0][2] = 0; 
  for(int i = 1; i <= N; ++i){
    cin >> xy[i][0] >> xy[i][1] >> xy[i][2];
  }
  bool flag = true;
  for(int i = 1; i <= N; ++i){
    int t = xy[i][0] - xy[i-1][0];
    int dis = abs(xy[i][1] - xy[i-1][1]) + abs(xy[i][2] - xy[i-1][2]);
    if(dis > t) flag = false;
    else if((t-dis)%2) flag = false;
    //    cout << "t dis :" << t << " " << dis << endl;
   }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}
