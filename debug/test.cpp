#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    stack <int> stack;
    string order;
    int num;

    cin >> t;

    while (t--){
        cin >> order;

        if (order == "push"){
            cin >> num;
            cin.ignore();
            stack.push(num);
        }
        else if (order == "top"){
            if (stack.empty()){
                cout << -1 << '\n';
            }
            else {
                cout << stack.top() << '\n';
            }
        }
        else if (order == "size"){
            cout << stack.size() << '\n';
        }
        else if (order == "pop"){
            if (stack.empty()){
                cout << -1 << '\n';
            }
            else {
                cout << stack.top() << '\n';
                stack.pop();
            }
        }
        else if (order == "empty"){
            if (stack.empty()){
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
    }
    return 0;
}