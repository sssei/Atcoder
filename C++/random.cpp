#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

int main(){
    vector <int> vec(10);
    random_device rnd;

    for (int i = 0; i < 10; i++){
        vec.at(i) = (rnd()%101);
        cout << "vec.at(" << i << ") : " << vec.at(i) << endl;
    }

    int vec_min = *min_element(vec.begin(),vec.end());
    int vec_max = *max_element(vec.begin(),vec.end());

    cout << "vec_min : " << vec_min << endl;
    cout << "vec_max : " << vec_max << endl;
    
}