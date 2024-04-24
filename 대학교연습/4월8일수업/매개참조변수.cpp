#include <iostream>
using namespace std;
void addConst(int& x, int y){
    x = x + 200;
    y = y + 200;
    cout << "addConst함수에서 x, y를 출력한다 " << '\n';
    cout << "&x = " << &x << " x = " << x << '\n';
    cout << "&y = " << &y << " y = " << y << '\n';
}

int main(){
    int a = 100, b = 10;
    addConst(a,b);
    cout << "main함수에서 a,b를 출력한다 " << '\n';
    cout << "&a = " << &a << " a = " << a << '\n';
    cout << "&b = " << &b << " b = " << b << '\n';
    return 0;
}