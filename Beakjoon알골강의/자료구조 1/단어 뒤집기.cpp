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
   cin.ignore(); // ���� ����

   while (testcase--){
    getline(cin, sentence); // ���ڿ� �Է¹ޱ� (���๮�ڰ� ���� ������ �Է�)
    sentence += ' '; // ���ڿ� ������ ���๮��(\n) ���� ���� �߰��ϱ�

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