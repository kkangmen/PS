#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요." << '\n';
    string s;
    getline(cin, s);
    int sum = 0;
    int srtidx = 0;
    while(true){

        int endidx = s.find('+', srtidx);
        if (endidx == -1){
            string part = s.substr(srtidx);
            cout << part << '\n';
            sum += stoi(part);
            break;
        }
        int count = endidx - srtidx;
        string part = s.substr(srtidx, endidx);
        int num = stoi(part);
        cout << part << '\n';
        sum += num;
        srtidx = endidx+1;
    }
    cout << sum << '\n';
    return 0;
}