#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  double  W,H,x,y;
  cin >> W >> H >> x >> y;
  vector<double> area(4);
  area[0] = y / H;
  area[1] = 1 - y / H;
  area[2] = x / W;
  area[3] = 1 - x / W;
  sort(area.begin(), area.end());
  int  flag = 0;
  if(area[0] == area[1]) flag = 1;
  cout << area[2] * H * W << " " << flag << endl;
}
