#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N,T;
    cin >> N >> T;
    vector <int> c(N);
    vector <int> t(N);

    for (int i = 0; i < N; i++){
        cin >> c.at(i) >> t.at(i);
    }

    int c_min = 10000;
    for (int i = 0; i < N; i++){
        if (t.at(i) <= T){
            c_min = min(c_min,c.at(i));
        }
    }

    if(c_min == 10000) cout << "TLE" << endl;
    else cout << c_min << endl;
}