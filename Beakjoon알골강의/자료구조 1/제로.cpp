#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int K;
    stack<int> stack;
    int num;
    int sum = 0;

    cin >> K;

    while(K--){
        cin >> num;

        if (num != 0){
            stack.push(num);
        }
        else {
            stack.pop();
        }
    }

    while (!stack.empty()){
        sum += stack.top();
        stack.pop();
    }

    cout << sum << endl;

    return 0;
}