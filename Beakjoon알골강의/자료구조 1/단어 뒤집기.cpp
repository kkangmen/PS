#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
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

    return 0;
}