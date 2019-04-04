#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N,M,X,Y;
    cin >> N >> M >> X >> Y;

    vector<int> x(N),y(M);
    for (int i = 0; i < N; i++){
        cin >> x.at(i);
    }
    for (int i = 0; i < M; i++){
        cin >> y.at(i);
    }

    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    int x_max = x.at(N-1);
    int y_min = y.at(0);

    if (x_max >= y_min){
        cout << "War" << endl;
    }else if(y_min <= X){
        cout << "War" << endl;
    }else if(x_max >= Y){
        cout << "War" << endl;
    }else{
        cout << "No War" << endl;
    }

}