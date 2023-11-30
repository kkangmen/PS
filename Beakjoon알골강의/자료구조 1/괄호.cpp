#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    int testcase;
    string PS;
    stack<int> stack;

    cin >> testcase;
    cin.ignore();

    while (testcase--){
        getline(cin, PS);

        for (int i = 0; i < PS.size(); i++){
            if (PS[i] == '('){
                stack.push(1);
            }
            else {
                if (!stack.empty()){
                    stack.pop();
                }
                else{
                    stack.push(1);
                    break;
                }
            }

        }

        if (stack.empty()){
            cout << "YES" << endl;
        }
        else {
            while (!stack.empty()){
                stack.pop();
            }
            cout << "NO" << endl;
        }
    }
    return 0;
}