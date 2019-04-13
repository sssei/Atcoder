#include <iostream>
#include <vector>

using namespace std;


int main(){
    vector <int> vec(2);
    vector <int> x1(2);
    vector <int> x2(2);

    cin >> x1.at(0) >> x1.at(1) >> x2.at(0) >> x2.at(1);

    vec.at(0) = x2.at(0) - x1.at(0);
    vec.at(1) = x2.at(1) - x1.at(1); 

    vector <int> vec2(2);
    
    vec2.at(0) = -vec.at(1);
    vec2.at(1) = vec.at(0);

    vector <int> x3(2);
    vector <int> x4(2);

    x4.at(0) = x1.at(0) + vec2.at(0);
    x4.at(1) = x1.at(1) + vec2.at(1);

    x3.at(0) = x4.at(0) + x2.at(0) - x1.at(0);
    x3.at(1) = x4.at(1) + x2.at(1) - x1.at(1);

    cout << x3.at(0) << " " << x3.at(1) << " " << x4.at(0) <<" " << x4.at(1) << endl;
}