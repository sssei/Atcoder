#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    vector <int> vec(10);
    iota(vec.begin(),vec.end(),1); //指定された値から始まる整数列を生成
    for (auto &x: vec){
        cout << x << endl;
    }
}

