#include <iostream>

using namespace std;

int& localVar(){
    int lvar = 200;
    cout << "&lvar(�Լ�,����) = " << &lvar << " lvar = " << lvar << '\n';
    return lvar;
}

int main(){
    int &a = localVar();
    cout << "&a(����,����) = " << &a << " a = " << a << '\n';

    int &b = localVar();
    cout << "&b(����, ����) = " << &b << " b = " << b << '\n';
}
