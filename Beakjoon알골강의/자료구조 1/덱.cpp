#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    string order;
    int num;
    deque<int> deque;

    cin >> N;
    cin.ignore();

    while (N--){
        cin >> order;

        if (order == "push_back"){
            cin >> num;
            deque.push_back(num);
        }
        else if (order == "push_front"){
            cin >> num;
            deque.push_front(num);
        }
        else if (order == "pop_front"){
            if (!deque.empty()){
                cout << deque.front() << '\n';
                deque.pop_front();
            }
            else { 
                cout << -1 << '\n';
            }
        }
        else if (order == "pop_back"){
            if (!deque.empty()){
                cout << deque.back() << '\n';
                deque.pop_back();
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if (order == "size"){
            cout << deque.size() << '\n';
        }
        else if (order == "empty"){
            if (deque.empty()){
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else if (order == "front"){
            if (!deque.empty()){
                cout << deque.front() << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if (order == "back"){
            if (!deque.empty()){
                cout << deque.back() << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
    }
    return 0;
}