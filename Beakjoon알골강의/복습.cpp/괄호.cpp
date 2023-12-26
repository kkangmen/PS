#include <iostream>
#include <stack>

using namespace std;

int main(){
    int t;
    string ps;
    stack <char> stack;

    cin >> t;
    cin.ignore();

    while (t--){
        getline(cin, ps);

        for (int i = 0; i < ps.size(); i++){
            if (ps[i] == '('){
                stack.push(0);
            }
            else {
                if (stack.empty()){
                    stack.push(1);
                    break;
                }
                else{
                    stack.pop();
                }                
            }
        }

        if (stack.empty()){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
            while (!stack.empty()){
                stack.pop();
            }
        }
    }


    return 0;
}