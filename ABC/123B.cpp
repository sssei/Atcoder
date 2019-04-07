#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vec(5);
    for (int i = 0; i < 5; i++){
        cin >> vec.at(i);
    }
    int ans = 11;
    int n;
    for (int i = 0; i < 5; i++){
        if (vec[i]%10 != 0 && vec[i]%10 < ans){
            ans = vec[i]%10;
            n = i;
        }
    }
    int cnt = 0;
    if (ans != 11){
        for (int i = 0; i < 5; i++){
            if(i != n){
                if (vec[i]%10 != 0){
                    cnt += (vec[i]/10 + 1) * 10;
                }else{
                    cnt += vec[i];
                }
            }else{
                cnt += vec[i];
            }
        }
    }else{
        for (int i = 0; i < 5; i++){
            cnt += vec[i];
        }
    }

    cout << cnt << endl;

}