#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<string> stack;

    string sentence;
    cin >> sentence;
    
    int testcase;
    cin >> testcase;
    
    for (char ch : sentence){
        cout << ch << endl;
    }


    return 0;
}