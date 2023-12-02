#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    string sentence;
    int M;
    stack<char> stack_left;
    stack<char> stack_right;
    
    getline(cin, sentence);
    cin >> M;
    cin.ignore();

    for (int i = 0; i < sentence.size(); i++){
        stack_left.push(sentence[i]);
    }

    while (M--){
        char order;
        cin >> order;

        if (order == 'L'){
            if (!stack_left.empty()){
                stack_right.push(stack_left.top());
                stack_left.pop();
            }
        }
        else if (order == 'D'){
            if (!stack_right.empty()){
                stack_left.push(stack_right.top());
                stack_right.pop();
            }
        }
        else if (order == 'B'){
            if (!stack_left.empty()){
                stack_left.pop();
            }
        }
        else if (order == 'P'){
            char c;
            cin >> c;
            stack_left.push(c);
        }
    }

    while (!stack_left.empty()){
        stack_right.push(stack_left.top());
        stack_left.pop();
    }

    while (!stack_right.empty()){
        cout << stack_right.top();
        stack_right.pop();
    }
    return 0;
}