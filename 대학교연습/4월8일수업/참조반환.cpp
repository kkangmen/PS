#include <iostream>
using namespace std;

int& addConst(int& x, int y){
    x = x + 200;
    y = y + 200;
    cout << "addConst�Լ����� x,y�� ����Ѵ�." << '\n';
    cout << "&x = " << &x << " x = " << x << '\n';
    cout << "&y = " << &y << " y = " << y << '\n';
    return x;
}

int main(){
    int a = 100, b = 10;
    addConst(a,b) = 555; //addConst()�� ������ ���� x�� ���� x,a�� 555����
    cout << "main �Լ����� addConst(a,b) = 555�� �� a, b, c " << '\n';
    cout << "&a = " << &a << " a = " << a << '\n';
    cout << "&b = " << &b << " b = " << b << '\n';
    return 0;
}