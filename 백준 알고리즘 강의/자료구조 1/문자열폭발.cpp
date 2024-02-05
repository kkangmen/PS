#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<char> v;
    string s, bomb;
    cin >> s >> bomb;

    for (int i = 0; i < s.size(); i++){
        v.push_back(s[i]);

        if (v.size() >= bomb.size()){
            bool flag = true;
            if (v[v.size() - 1] == bomb[bomb.size() -1]){
                for (int j = 0; j < bomb.size(); j++){
                    if (v[v.size() - bomb.size() + j] != bomb[j]){
                        flag = false;
                        break;
                    }
                }
                if (flag){
                    for (int j = 0; j < bomb.size(); j++){
                        v.pop_back();
                    }
                }
            }
        }
    }
    if (v.size() == 0){
        cout << "FRULA" << '\n';
    }
    else {
        for (auto c : v){
            cout << c;
        }
    }

    return 0;
}
