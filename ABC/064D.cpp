#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int N;
  cin >> N;
  string S;
  cin >> S;
  int height = 0;
  int bottom = 0;
  int left = 0;
  int right = 0;
  for(int i = 0; i < S.size(); i++){
    if(S[i] == '('){
      height++;
    }else{
      height--;
      if(height < bottom){
	bottom = height;
      }
    }
  }
  if(height <= 0){
    left = -height;
    bottom += left;
  }else{
    right = height;
  }

  if(bottom < 0){
    left += - bottom;
    right +=  - bottom;
  }
  
  for(int i = 0; i < left; i++){
    cout << '(' ;
  }
  
  cout << S;

  for(int i = 0; i < right; i++){
    cout << ')';
  }

  cout << endl;
}
