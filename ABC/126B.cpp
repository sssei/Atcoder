#include <iostream>

using namespace std;

bool judge(int x){
  if(x > 0 && x <= 12) return true;
  else return false;
}

int main(){
  int S;
  cin >> S;
  int first = S/100;
  int last = S%100;
  if(judge(last)){
    if(judge(first)) cout << "AMBIGUOUS" << "\n";
    else cout << "YYMM" << "\n";
  }else{
    if(judge(first)) cout << "MMYY" << "\n";
    else cout << "NA" << "\n";
  }
}
