#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void rot(vector<double> &vec, int R, double theta){
    double x = vec.at(0);
    double y = vec.at(1);
    vec.at(0) = R*(x*cos(theta) - y*sin(theta));
    vec.at(1) = R*(x*sin(theta) + y*cos(theta));
    cout << x << " "<< sin(theta) << " "<< y << " " << cos(theta) << endl;
}

int main(){
    vector <double> vec(2);
    vector <int> x1(2);
    vector <int> x2(2);

    cin >> x1.at(0) >> x1.at(1) >> x2.at(0) >> x2.at(1);

    vec.at(0) = (double)x2.at(0) - (double)x1.at(0);
    vec.at(1) = (double)x2.at(1) - (double)x1.at(1); 

    vector <double> vec2 = vec;

    rot(vec2,1,M_PI/2);
    cout << vec.at(0) << " " << vec.at(1) << endl;
    cout << vec2.at(0) << " " << vec2.at(1) << endl;

    vector <int> x3(2),x4(2);

    x4.at(0) = x1.at(0) + vec2.at(0);
    x4.at(1) = x1.at(1) + vec2.at(1);

    x3.at(0) = x4.at(0) + x2.at(0) - x1.at(0);
    x3.at(1) = x4.at(1) + x2.at(1) - x1.at(0);

    cout << (int)x3.at(0) << " " << (int)x3.at(1) << " " << (int)x4.at(0) <<" " << (int)x4.at(1) << endl;
}