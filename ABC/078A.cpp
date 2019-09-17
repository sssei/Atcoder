#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  string x,y;
  cin >> x >> y;
  if(x > y) cout << ">" << endl;
  else if(x == y) cout << "=" << endl;
  else cout << "<" << endl;
}
