#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string sentence;
    stack <char> stack1;

    int result = 0;

    while (1){
        getline(cin, sentence);
        

        if (sentence[0] == '.'){
            break;
        }
        else{
            for (int i = 0; i < sentence.size(); i++){
                if (sentence[i] == '('){
                    stack1.push(1);
                }
                else if (sentence[i] == ')'){
                    if (!stack1.empty()){
                        if (stack1.top() != 1){
                            result++;
                        }
                        stack1.pop();
                    }
                    else{
                        result++;
                    }
                }
                else if (sentence[i] == '['){
                    stack1.push(0);
                }
                else if (sentence[i] == ']'){
                    if (!stack1.empty()){
                        if (stack1.top() != 0){
                            result++;
                        }
                        stack1.pop();
                    }
                    else{
                        result++;
                    }
                }
            }
            if (result == 0 && stack1.empty()){
                cout << "yes" << '\n';
            }
            else {
                cout << "no" << '\n';
                while (!stack1.empty()){
                    stack1.pop();
                }
                result = 0;
            }
        }
    }
    return 0;
}