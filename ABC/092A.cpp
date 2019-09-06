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
  cout << min(a,b) + min(c,d) << endl;
}
