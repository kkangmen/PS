#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>

using namespace std;

int main(){
    int n;
    int minus = 0;
    int absminus = 0;
    int num;
    vector <int> v;
    deque <int> dq;
    deque <int> dq_index;

    cin >> n;

    for (int i = 1; i <= n; i++){
        dq_index.push_back(i);
    }

    for (int i = 0; i < n; i++){
        cin >> num;
        dq.push_back(num);
    }

    while (!dq.empty()){
        for (int i = 0; i < n; i++){
            if (dq.front() > 0){
                minus = dq.front();
                dq.pop_front();
                v.push_back(dq_index.front());
                dq_index.pop_front();
                while (minus-1){
                    dq.push_back(dq.front());
                    dq.pop_front();
                    dq_index.push_back(dq_index.front());
                    dq_index.pop_front();
                    minus--;
                }
            }
            else {
                minus = dq.front();
                absminus = abs(minus);
                dq.pop_front();
                v.push_back(dq_index.front());
                dq_index.pop_front();
                while (absminus){
                    dq.push_front(dq.back());
                    dq.pop_back();
                    dq_index.push_front(dq_index.back());
                    dq_index.pop_back();
                    absminus--;
                }
            }
        }
    }

    for (int i = 0 ; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    return 0;
}