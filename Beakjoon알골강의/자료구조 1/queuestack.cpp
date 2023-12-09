#include <iostream>
#include <deque>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    deque<int> dq;
    int N;
    bool flag[100001];
    int M;

    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> flag[i];
    }

    for (int i = 0; i < N; i++){
        int num;
        cin >> num;
        if (flag[i] == 0){
            dq.push_back(num);
        }
    }

    cin >> M;
    for (int i = 0; i < M; i++){
        int y;
        cin >> y;
        dq.push_front(y);
        cout << dq.back() << " ";
        dq.pop_back();
    }


    return 0;
}