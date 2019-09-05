#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
  
  vector <int> vec = {1,1,1,1,4,4,4,4,4,43};
  cout << *unique(vec.begin(), vec.end()) << endl;

}
