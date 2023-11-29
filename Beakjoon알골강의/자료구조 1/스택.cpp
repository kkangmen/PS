#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    stack<int> stack;

    string order;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> order;
        if (order == "push"){
            int num;
            cin >> num;
            stack.push(num);
        }
        else if(order == "pop"){
            if(stack.size() == 0){
                cout << -1 << endl;
            }
            else{
                cout << stack.top() << endl;
                stack.pop();
            }
        }
        else if (order == "size"){
            cout << stack.size() << endl;
        }
        else if (order == "empty"){
            if (stack.size() == 0){
                cout << 1 << endl;
            }
            else {
                cout << 0 << endl;
            }
        }
        else if (order == "top"){
            if (stack.size()== 0){
                cout << -1 << endl;
            }
            else {
                cout << stack.top() << endl;
            }
        }
    }
    return 0;
}