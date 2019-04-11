#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    vector <int> vec(10);
    iota(vec.begin(),vec.end(),1);
    for (int x: vec){
        cout << x << endl;
    }
}