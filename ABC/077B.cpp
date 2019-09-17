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
  int ans = 1;
  while(ans*ans <= N){
    ans++;
  }
  ans--;
  cout << ans*ans << endl;
}
