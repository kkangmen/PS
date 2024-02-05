#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    queue<int> q;
    vector<int> v;
    int n, k;
    int cnt = 1;
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        q.push(i);
    }
    while (!q.empty()){
        if (cnt % k == 0){
            v.push_back(q.front());
            q.pop();
            cnt++;
        }
        else {
            q.push(q.front());
            q.pop();
            cnt++;
        }
    }
    

    for (int i = 0; i < v.size(); i++){
        if (v.size() == 1){
            cout << '<' << v[0] << '>' << '\n';
        }
        else{
            if (i == 0){
                cout << '<' << v[i] << ", ";
            }
            else if (i == v.size()-1){
                cout << v[i] << '>' << '\n';
            }
            else {
                cout << v[i] << ", ";
            }
        }
    }
    return 0;
}