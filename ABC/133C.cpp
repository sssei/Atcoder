#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

int main(){
  int L,R;
  cin >> L >> R;
  int l = L % 2019;
  int r = R % 2019;
  if(L + 2019 <= R){
    cout << 0 << endl;
  }else if(l > r){
    cout << 0 << endl;
  }else{
    int min = (l * r) % 2019;
    for(int i = l; i < r; i++){
      for(int j = i + 1; j <= r; j++){
	int tmp = (i * j) % 2019;
	if(tmp < min) min = tmp;
      }
    }
    cout << min << endl;
  }
}
