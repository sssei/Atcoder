#include <iostream>
#include <vector>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector <int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }

  bool flag_z = true;
  bool flag_e = true;
  int cnt = 0;
  while(flag_e){
    flag_e = false;
    flag_z = false;
    int cur;
    for(int i = 0; i < N; i++){
      if(vec.at(i) != 0){
	flag_e = true;
	flag_z = true;
	cur = i;
	vec.at(i)--;
      }else{
	if(flag_z){
	  cnt++;
	  flag_z = false;
	}
      }
    }
    if(flag_z) cnt++;
  }
  cout << cnt << endl;
}
