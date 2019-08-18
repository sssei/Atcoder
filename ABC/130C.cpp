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
  int flag = 0;
  if(x == W/2 && y == H/2) flag = 1;
  cout << W * H / 2 << " " << flag << endl;
}
