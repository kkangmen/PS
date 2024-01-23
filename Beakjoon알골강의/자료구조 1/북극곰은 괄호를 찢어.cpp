#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    stack<char> stack;
    int n , result = 1;
    string s;
    cin >> n >> s;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == '(' && !stack.empty() && stack.top() == ')'){
            stack.pop();
        }
        else if (s[i] == '('){
            stack.push(s[i]);
        }
        else if (s[i] == ')' && !stack.empty() && stack.top() == '('){
            stack.pop();
        }
        else if (s[i] == ')'){
            stack.push(s[i]);
        }

        result = max((int)stack.size(), result);
    }
    if (stack.size() > 0){
        cout << -1 << '\n';
    }
    else {
        cout << result << '\n';
    }
    return 0;
}