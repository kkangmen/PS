#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<char> stack;
    string ps;
    int ans = 0;
    cin >> ps;

    for (int i = 0; i < ps.size(); i++){
        if (ps[i] == '('){
            stack.push('(');
        }
        else {
            if (ps[i] == ')' && ps[i-1] == '('){
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