#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int N,Y;
  cin >> N >> Y;
  int res1 = -1, res2 = -1, res3 = -1;
  
  for(int a = 0; a <= N; a++){
    for(int b = 0; a + b <= N; b++){
      int c = N - a - b;
      int total = 10000 * a + 5000 * b + 1000 * c;
      if(total == Y){
	res1 = a;
	res2 = b;
	res3 = c;
	break;
      }
    }
  }
  
  cout << res1 << " " << res2 << " " << res3 << endl;
  
}
