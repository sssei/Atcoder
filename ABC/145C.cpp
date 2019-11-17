#include <bits/stdc++.h>
#include <iomanip>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  int xy[N][2];
  for(int i = 0; i < N; i++){
    cin >> xy[i][0] >> xy[i][1];
  }
  double dis = 0;
  for(int i = 0; i < N-1; i++){
    for(int j = i+1; j < N; j++){
      dis += sqrt((xy[i][0] - xy[j][0]) * (xy[i][0] - xy[j][0]) + (xy[i][1] - xy[j][1]) * (xy[i][1] - xy[j][1]));
    }
  }
  dis = 2 * dis / ((N-1) * N);
  printf("%.9f\n",dis * (N-1));
}
