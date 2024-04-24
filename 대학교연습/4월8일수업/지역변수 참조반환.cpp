#include <iostream>

using namespace std;

int& localVar(){
    int lvar = 200;
    cout << "&lvar(함수,지역) = " << &lvar << " lvar = " << lvar << '\n';
    return lvar;
}

int main(){
    int &a = localVar();
    cout << "&a(메인,지역) = " << &a << " a = " << a << '\n';

    int &b = localVar();
    cout << "&b(메인, 참조) = " << &b << " b = " << b << '\n';
}
