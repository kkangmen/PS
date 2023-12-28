#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int n, k;
    queue <int> q;
    vector <int> v;
    int cnt = 1;

    cin >> n >> k;
    
    for (int i = 1; i <= n; i++){
        q.push(i);
    }

    while (!q.empty()){
        if (cnt == k){
            v.push_back(q.front());
            q.pop();
            cnt = 1;
        }
        else{
            q.push(q.front());
            q.pop();
            cnt++;
        }
    }


    if (v.size() == 1){
        cout << '<' << v[0] << '>' << '\n';
    }
    else{
        for (int i = 0; i < v.size(); i++){
            if (i == 0){
                cout << '<' << v[i] << ", ";
            }
            else if (i == v.size() -1){
                cout << v[i] << '>' << '\n';
            }
            else {
                cout << v[i] << ", ";
            }
        }
    }
}