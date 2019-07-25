#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct city{
  int id;
  int year;
  int number;
  int prefecture;
};

struct Prefecture{
  int idx;
  vector<city> City;
  void insert(city *c){
    City.push_back(*c);
    c->prefecture = idx;
  }

};

int main(){
  int N, M; cin >> N >> M;
  vector<Prefecture> P(N);
  vector<city> C(M);
  for(int i = 0; i < N; i++){
    P[i].idx = i;
  }
  for(int i = 0; i < M; i++){
    C[i].id = i;
    int pre; cin >> pre;
    P[pre].insert(&C[i]);
    cin >> C[i].year;
  }
  for(int i = 0; i < N; i++){

    int len = P[i].City.size();
    for(int j = 0; j < len; j++){
      P[i].City[j].number = j;
    } 
  }

  for(int i = 0; i < M; i++){
    int ans = C[i].prefecture * 1000000;
    ans += C[i].number;
    printf("%12d\n", ans);
  }

}


