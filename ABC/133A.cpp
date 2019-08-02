#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int N,A,B;
  cin >> N >> A >> B;
  int res1,res2;
  res1 = N * A;
  res2 = B;
  cout << min(res1, res2) << endl;
}
