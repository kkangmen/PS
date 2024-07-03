//간단한 참조 리턴 사례
#include <iostream>
using namespace std;

char& find(char s[], int index){
    return s[index]; // s[index] 공간의 참조 리턴
}

int main(){
    char name[] = "Mike";
    cout << name << '\n';

    find(name,0) = 'S'; // find가 리턴한 위치에 문자 'M' 저장
    cout << name << '\n';

    char& ref = find(name, 2); // ref는 name[2] 참조
    ref = 't';
    cout << name << '\n';
    return 0;
}