#include <bits/stdc++.h>

using namespace std;

int judge(vector <int> array, int n)
{
    for (int i = 0; i < n; i++){
        if (array.at(i) > i + 1)
            return -1;   
    }
    return 1;
}

int find(vector <int> array, int n)
{
    int ans;
    for (int i = n - 1; i > 0; i--){
        if (array[i]== i + 1){
            ans = i;
            break;
        }
    }
    return ans;
}

int main()
{
    int N;
    cin >> N;
    vector <int> b(N);
    vector <int> a(N,1);

    for (int i = 0; i < N; i++) cin >> b.at(i);

    for (int i = 0; i < N; i++){
        if (judge(b,N - i) == -1){
            cout << -1 << endl;
            return 0;
        }else{
            int ans = find(b,N - i);
            b.erase(b.begin() + ans);
            a.at(N - i) = ans;
        }
    }

    for (int i = 0; i < N; i++){
        cout << a.at(i) << endl;
    }
}