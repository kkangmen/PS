#include <iostream>
#include <cstring>
using namespace std;

class MyString{
private:
    char* pBuf; // 동적으로 할당된 메모리의 주소값 저장
public:
    MyString(const char* s = NULL);
    MyString(MyString& s);
    ~MyString();
    void print(); // 문자열을 화면에 출력
    size_t getSize(); // 문자열의 길이 반환
};
MyString::MyString(MyString& s){
    
}
MyString::MyString(const char* s){
    if (s == NULL){
        pBuf = new char[1];
        pBuf[0] = NULL;
    }
    else{
        pBuf = new char[strlen(s)+1];
        strcpy_s(pBuf, strlen(s)+1, s);
    }
}
void MyString::print(){
    cout << pBuf << '\n';
}
size_t MyString::getsize(){
    return strlen(pBuf);
}

int main(){
    MyString str1;
    MyString str2("Hello");
    MyString str3 = "World!";
    MyString str4 = str3;
    str1.print();
    str2.print();
    str3.print();
    str4.print();
    return 0;
}