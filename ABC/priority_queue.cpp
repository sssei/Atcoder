#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <queue>
typedef long long ll;
using namespace std;

int main(){
  priority_queue<int> que;
  que.push(3);
  que.push(4);
  que.push(1);
  while(!que.empty()){
    cout << que.top() << endl;
    que.pop();
  }
  
}
