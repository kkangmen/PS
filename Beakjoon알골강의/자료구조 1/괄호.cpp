#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    int testcase;
    string sentence;
    stack<int> stack;

    cin >> testcase;
    cin.ignore();
    

    while (testcase--){
        getline(cin, sentence);

        for (int i = 0; i < sentence.size(); i++){
            if (sentence[i] == '('){
                stack.push(1);
            }
            else{
                if (!stack.empty()){
                    stack.pop();
                }
                else {
                    stack.push(0);
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