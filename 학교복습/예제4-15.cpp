#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << '\n';
    string s;
    getline(cin, s, '&');
    cin.ignore();

    cout << "find: ";
    string find;
    getline(cin, find);
    cout << "replace: ";
    string change;
    getline(cin, change);

    int srtidx = 0;
    while (true){
        int flindex = s.find(find , srtidx);
        if (flindex == -1){
            break;
        }
        s.replace(flindex, find.length(), change);
        srtidx = flindex + change.length();
    }
    cout << s << '\n';
    return 0;
}

