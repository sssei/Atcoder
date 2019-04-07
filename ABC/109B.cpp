#include <iostream>
#include <string>
#include <vector>

using namespace std;

int vec_find(vector <string> vec, string n)
{
    for (size_t i = 0; i < vec.size(); i++){
        if (vec.at(i) == n)
            return 1;
    }
    return 0;
}

int main()
{
    int N; cin >> N;
    vector <string> W(N);
    vector <string> W2;
    for (int i = 0; i < N; i++){
        cin >> W.at(i);
    }

    int cnt = 0;
    for (int i = 1; i < N; i++){
        int w_size = W.at(i-1).length();
        if (W.at(i - 1).at(w_size - 1) == W.at(i)[0])
            cnt += 1;
    }

    for (int i = 0; i < N; i++ ){
        if (vec_find(W2,W.at(i)) == 0){
            W2.push_back(W.at(i));
        }else{
            cout << "No" << endl;
            return 0;
        }
    }

    if (cnt == N - 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}