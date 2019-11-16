#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node{
  node* ptr;
  int cnt;
  int label;
};

void init(node a[], int n){
  for(int i = 0; i < n; i++){
    a[i].ptr = NULL;
    a[i].cnt = 1;
    a[i].label = i;
  }
}

void merge(node* a, node* b){
  node* x = a;
  node* y = b;
  while(x->ptr != NULL){
    x = x->ptr;
  }
  while(y->ptr != NULL){
    y = y->ptr;
  }
  if(x == y) return;
  if(x->cnt > y->cnt){
    y->ptr = x;
    x->cnt += y->cnt;
  }else{
    x->ptr = y;
    y->cnt += x->cnt;
  }
}


int main(){
  int N,M;
  cin >> N >> M;
  node A[N];
  init(A, N);
  for(int i = 0; i < M; i++){
    int x,y,z;
    cin >> x >> y >> z;
    merge(&A[x-1], &A[y-1]);
  }
  int cnt = 0;
  for(int i = 0; i < N; i++){
    if(A[i].ptr == NULL){
      cnt++;
    }
  }
  cout << cnt << endl;
}
