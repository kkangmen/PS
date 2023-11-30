#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
<<<<<<< HEAD
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
=======
   int testcase;
   string sentence;
   stack<char> stack;

   cin >> testcase;
   cin.ignore(); // 버퍼 비우기

   while (testcase--){
    getline(cin, sentence); // 문자열 입력받기 (개행문자가 오기 전까지 입력)
    sentence += ' '; // 문자열 마지막 개행문자(\n) 전에 공백 추가하기

    for (int i = 0; i < sentence.size(); i++){
        if(sentence[i] == ' '){
            while (!stack.empty()){
                cout << stack.top();
                stack.pop();
            }cout << " ";
        }
        else{
            stack.push(sentence[i]);
        }
    }
    cout << endl;
   }
>>>>>>> 2e1143fab2d00679df20a60ff2706634f30771d0

    return 0;
}