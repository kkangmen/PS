#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    stack <char> stack;
    int t;
    string sentence;

    cin >> t;
    cin.ignore();

    while (t--){
        getline(cin, sentence);

        sentence += ' ';
        for (int i = 0; i < sentence.size(); i++){
            if (sentence[i] == ' '){
                while (!stack.empty()){
                    cout << stack.top();
                    stack.pop();
                }
                cout << ' ';
            }
            else {
                stack.push(sentence[i]);
            }
        }

        cout << '\n';
    }
    return 0;
}