#include <iostream>
using namespace std;
void addConst(int& x, int y){
    x = x + 200;
    y = y + 200;
    cout << "addConst�Լ����� x, y�� ����Ѵ� " << '\n';
    cout << "&x = " << &x << " x = " << x << '\n';
    cout << "&y = " << &y << " y = " << y << '\n';
}

int main(){
    int a = 100, b = 10;
    addConst(a,b);
    cout << "main�Լ����� a,b�� ����Ѵ� " << '\n';
    cout << "&a = " << &a << " a = " << a << '\n';
    cout << "&b = " << &b << " b = " << b << '\n';
    return 0;
}