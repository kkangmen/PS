#include <iostream>
#include <stack>

using namespace std;

int main(){
    int N;
    int num;
    stack<int> stack1;
    stack<int> stack2;

    cin >> N;

    cin >> num;
    stack1.push(num);
    for (int i = 0; i < N-1; i++){
        cin >> num;

        if (num > stack1.top()){
            stack2.push(stack1.top());
            stack1.pop();
            stack1.push(num);
        }
        else {
            stack1.push(num);
        }
    }
    

    if (stack2.size() > 1){
        cout << "Sad" << endl;
    }
    else{
        cout << "Nice" << endl;
    }


    return 0;
}