#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    int testcase;
    string sentence;
    stack<char> stack;

    cin >> testcase;
    cin.ignore();

    while (testcase--){
        getline(cin, sentence);
        sentence += ' ';

        for (int i = 0; i < sentence.size(); i++){
            if (sentence[i] == ' '){
                while (!stack.empty()){
                    cout << stack.top();
                    stack.pop();
                } cout << ' ';
            }
            else {
                stack.push(sentence[i]);
            }
        }
        cout << endl;
    }

    return 0;
}