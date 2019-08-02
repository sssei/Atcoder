#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int N; cin >> N;
  vector<int> A(N);
  for(int i = 0; i < N; i++){
    cin >> A.at(i);
  }
  
  int max1,max2;
  if(A.at(0) > A.at(1)){
    max1 = 0;
    max2 = 1;
  }else{
    max1 = 1;
    max2 = 0;
  }

  for(int i = 2; i < N; i++){
    if(A.at(i) > A.at(max1)){
      max2 = max1;
      max1 = i;
    }else if(A.at(i) > A.at(max2)){
      max2 = i;
    }
  }

  //  cout << "max1 max2" << max1 << " " << max2 << endl;
  for(int i = 0; i < N; i++){
    if(i != max1) cout << A.at(max1) << endl;
    else cout << A.at(max2) << endl;
  }

}
