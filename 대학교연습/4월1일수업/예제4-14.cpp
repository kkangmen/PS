#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cout << "���� ���ڿ��� �Է��ϼ���." << '\n';

    getline(cin, s);

    int sum = 0;
    int start_index = 0;
    while(true){
        int findex = s.find('+', start_index);
        if (findex == -1){
            string part = s.substr(start_index);
            cout << part << '\n';
            sum += stoi(part);
            break;
        }
        int count = findex - start_index;
        string part = s.substr(start_index, count);
        cout << part << '\n';
        sum += stoi(part);
        start_index = findex + 1;
    }

    cout << "������ : " << sum << '\n';
    return 0;
}