#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  string S;
  cin >> S;
  if(S == "Sunny") cout << "Cloudy" << endl;
  else if(S == "Cloudy") cout << "Rainy" << endl;
  else cout << "Sunny" << endl;
}
