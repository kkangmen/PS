#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N;
    stack<int> stack;

    cin >> N;

    for (int i = 0; i < N ; i++){
        int order;
        cin >> order;

        if (order == 1){
            int num;
            cin >> num;
            stack.push(num);
        }
        else if (order == 2){
            if (!stack.empty()){
                cout << stack.top() << '\n';
                stack.pop();
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if (order == 3){
            cout << stack.size() << '\n';
        }
        else if (order == 4){
            if (stack.empty()){
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else if (order == 5){
            if (!stack.empty()){
                cout << stack.top() << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
    }
    return 0;
}