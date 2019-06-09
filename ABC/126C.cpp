#include <iostream>
#include <cstdio>

using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  double ans = 0;
  for(int i = 1; i <= N; i++){
    int num = i;
    double cnt = 1;
    while(num < K){
      num *= 2;
      cnt = cnt / 2.0;
    }
    ans += 1.0/N*cnt;
  }
  printf("%.10f\n",ans);
}
