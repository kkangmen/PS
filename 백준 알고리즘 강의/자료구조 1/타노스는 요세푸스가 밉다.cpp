#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    int n, k;
    int cnt;
    cin >> n >> k;

    for (int i = 1; i <= n; i++){
        q.push(i);
    }

    while (1){
        if (q.size() >= k){
            for (int i = 1; i <= k; i++){
                if (i == 1){
                    q.push(q.front());
                    q.pop();
                }
                else{
                    q.pop();
                }
            }
        }
        else {
            cout << q.front() << '\n';
            break;
        }
    }
    return 0;
}