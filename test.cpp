#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector <int> vec;
  vec[0] = 0;
  vec[1] = 34;
  for (auto &x : vec) cout << x << endl;
}
