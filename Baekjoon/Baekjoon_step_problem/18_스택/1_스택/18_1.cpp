#include <iostream>
#include <stack>
#include <string>

using namespace std;

void order(stack<int> *s);

int main(){

    stack<int> test;
    int num_order;
    cin >> num_order;

    for (int i = 0; i < num_order; i++){
        order(&test);
    }

    return 0;
}

void order(stack<int> *s){
    string str;
    cin >> str;
    if (str == "push"){
        int num; 
        cin >> num;

        (*s).push(num);
    }
    else if(str == "pop"){
        if ((*s).empty()){
            cout << -1 << endl;
        }
        else {
            cout << (*s).top() << endl;
            (*s).pop();
        }
    }
    else if(str == "size"){
        cout << (*s).size() << endl;
    }
    else if(str == "empty"){
        if ((*s).empty()){
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    else if(str == "top"){
        if ((*s).empty()){
            cout << -1 << endl;
        }
        else {
            cout << (*s).top() << endl;
        }
    }
}