#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int n;
    queue <int> q;
    vector <int> v;
    cin >> n;

    for (int i = 1; i <= n; i++){
        q.push(i);
    }

    while (!q.empty()){
        v.push_back(q.front());
        q.pop();
        if (q.size() != 1){
            q.push(q.front());
            q.pop();
        }
    }

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}