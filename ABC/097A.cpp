#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  int dis = abs(c-a);
  if(dis <= d){
    cout << "Yes" << endl;
    return 0;
  }else{
    int dis1 = abs(b-a);
    int dis2 = abs(c-b);
    if(dis1 <= d && dis2 <= d){
      cout << "Yes"  << endl;
      return 0;
    }else{
      cout << "No" << endl;
      return 0;
    }
  }
}
