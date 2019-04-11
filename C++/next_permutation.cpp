#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector <int> vec = {9,3,1};

    sort(vec.begin(),vec.end());

    do{
        for (int x: vec) cout << x << " "; cout << endl;
    }while(next_permutation(vec.begin(),vec.end()));

    cout << "-----" << endl;

    sort(vec.rbegin(),vec.rend());

    do{
        for (int x: vec) cout << x << " "; cout << endl;
    }while(prev_permutation(vec.begin(),vec.end()));
    
}