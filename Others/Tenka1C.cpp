#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string S;
    int N;
    cin >> N;
    cin >> S;
    vector <int> sharp;
    vector <int> dot(1);
    int cnt = 0;
    bool flag = true;

    for (int i = 0; i < N; ++i){
        if(S.at(i) == '#'){
            if (flag){
                cnt++;
                sharp.push_back(1);
            }else{
                sharp.at(cnt - 1)++;
            }
            flag = false;
        }else{
            if (!flag){
                dot.push_back(1);
            }else{
                dot.at(cnt)++;
            }
            flag = true;
        }
    }

    vector <int> vec(cnt+1);
    for (int i = 0; i < cnt; ++i){
        int dotSum = 0;
        int sharpSum = 0;
        for (int j = i + 1; j < cnt + 1; j++){
            dotSum += dot.at(j);
        }
        for (int j = 0; j < i ; j++){
            sharpSum += sharp.at(j);
        }
        vec.at(i) = dotSum + sharpSum;
    }
    
    for (int i = 0; i < cnt; i++){
        vec.at(cnt) += sharp.at(i);
    }

    cout << *min_element(vec.begin(),vec.end()) << endl; 
}