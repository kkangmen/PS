#include <iostream>
#include <stack>

using namespace std;

int main(){
    string sentence;
    int n;
    stack <char> stack_r;
    stack <char> stack_l;
    char order;
    char munza;

    getline(cin, sentence);

    for (int i = 0; i < sentence.size(); i++){
        stack_l.push(sentence[i]);
    }

    cin >> n;

    while (n--){
        cin >> order;

        if (order == 'L'){
            if (!stack_l.empty()){
                stack_r.push(stack_l.top());
                stack_l.pop();
            }
        }
        else if (order == 'D'){
            if (!stack_r.empty()){
                stack_l.push(stack_r.top());
                stack_r.pop();
            }
        }
        else if (order == 'B'){
            if (!stack_l.empty()){
                stack_l.pop();
            }
        }
        else {
            cin >> munza;
            stack_l.push(munza);
        }
    }

    while (!stack_l.empty()){
        stack_r.push(stack_l.top());
        stack_l.pop();
    }
    while (!stack_r.empty()){
        cout << stack_r.top();
        stack_r.pop();
    }
    return 0;
}