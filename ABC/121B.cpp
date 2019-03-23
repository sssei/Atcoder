#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N,M,C;
    int ans = 0;
    cin >> N >> M >> C;
    vector <int> B(M);
    vector < vector <int> > A(N,vector<int>(M));
    for (int i = 0; i < M; i++) cin >> B.at(i);
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < N; i++){
        int num = 0;
        for (int j = 0; j < M; j++){
            num += A[i][j]*B[j];
        }
        num += C;
        if (num > 0) ans += 1;
    }
    cout << ans << endl;
}