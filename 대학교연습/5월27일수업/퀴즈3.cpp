#include <iostream>
#include <vector>
using namespace std;

int main(){
    int i;
    vector<int> v(5); // iterator 사용시 개수 미리 지정
    vector<int>::iterator it;

    int *pV = &v[0];
    cout << "정수값 5개 입력: ";
    for (it = v.begin(); it != v.end(); it++){
        cin >> *it;
    }
    pV = &v[0];
    cout << "정수값 5개 출력: ";
    for (it = v.begin(); it != v.end(); it++){
        cout << *it << ' ';
    }
    cout << '\n';
    return 0;
}