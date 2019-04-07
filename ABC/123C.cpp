#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N; cin >> N;
    vector <int> vec(5);

    for (int i = 0; i < 5; i++){
        cin >> vec.at(i);
    }

    sort(vec.begin(),vec.end());
    int output = vec.at(0);

    int t = N/output;

    if (N % output == 0){
        cout << 4 + t << endl;
    }else{
        cout << 4 + t + 1 << endl;
    }

    
}