#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(){
    int num1, num2, num3; // �� �ڿ���
    int count[10] = {};

    cin >> num1;
    cin >> num2;
    cin >> num3;
    
    int mult3num = num1 * num2 * num3; // �� �ڿ����� ���� ��

    string str_num = to_string(mult3num);
    
    for (char c : str_num){
        count[c - '0']++;
    }

    for (int i : count){
        cout << i << endl;
    }

    
    return 0;
}