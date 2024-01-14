#include <iostream>
#include <stack>

using namespace std;

int main(){
    string phar;
    stack<char> stack;
    int ans = 0;

    cin >> phar;

    for (int i = 0; i < phar.size(); i++){
        if (phar[i] == '('){
            stack.push('(');
        }
        else{
            if (phar[i] == ')' && phar[i-1] == '('){
                stack.pop();
                ans += stack.size();
            }
            else {
                stack.pop();
                ans += 1;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}