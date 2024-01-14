#include <iostream>
#include <stack>

using namespace std;

void print(stack<char> &stack);

int main(){
    stack<char> stack;
    string sentence;
    bool tag = false;

    getline(cin, sentence);

    sentence += ' ';
    for (char ch : sentence){
        if (ch == '<'){
            print(stack);
            tag = true;
            cout << ch;
        }
        else if (ch == '>'){
            tag = false;
            cout << ch;
        }
        else if (tag){
            cout << ch;
        }
        else {
            if (ch == ' '){
                print(stack);
                cout << ' ';
            }
            else {
                stack.push(ch);
            }
        }
    }
    return 0;
}

void print(stack<char> &stack){
    while (!stack.empty()){
        cout << stack.top();
        stack.pop();
    }
}
