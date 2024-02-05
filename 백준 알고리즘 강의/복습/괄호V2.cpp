#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    stack<char> stack;
    cin >> t;

    while (t--){
        string ps;
        int result = 0;
        cin >> ps;

        for (int i = 0; i < ps.size(); i++){
            if (ps[i] == '('){
                stack.push('(');
            }
            else {
                if (ps[i] == ')' && !stack.empty()){
                    stack.pop();
                }
                else{
                    result++;
                    break;
                }
            }
        }

        if (stack.size() == 0 && result == 0){
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
            while (!stack.empty()){
                stack.pop();
            }
        }
    }
    return 0;
}