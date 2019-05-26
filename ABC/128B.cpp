#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

struct rest{
  string S;
  int P;
  int idx;
 };

int main(){
  
  int N; cin >> N;

  vector <struct rest> vec;
  for(int i = 0; i < N; i++){
    struct rest a;
    cin >> a.S >> a.P;
    a.idx = i + 1;
    vec.push_back(a);
  }

  for(int i = 0; i < N - 1; i++){
    for(int j = N - 1; j > i; j--){
      if(vec[j - 1].P < vec[j].P){
	struct rest temp = vec[j];
	vec[j] = vec[j-1];
	vec[j-1] = temp;
      }
    }
  }

  for(int i = 0; i < N - 1; i++){
    for (int j = N - 1; j > i; j--){
      if(vec[j-1].S > vec[j].S){
	struct rest temp = vec[j];
	vec[j] = vec[j-1];
	vec[j-1] = temp;
      }
    }
  }

  for(int i = 0; i < N; i++){
    cout << vec[i].idx << endl;
  }
}
