#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    unsigned long N; cin >> N;
    vector <unsigned long> vec(5);

    for (int i = 0; i < 5; i++){
        cin >> vec.at(i);
    }

    sort(vec.begin(),vec.end());
    unsigned long output = vec.at(0);

    unsigned long t = N/output;

    if (N % output == 0){
        cout << 4 + t << endl;
    }else{
        cout << 4 + t + 1 << endl;
    }

    
}