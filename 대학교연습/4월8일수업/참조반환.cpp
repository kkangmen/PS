#include <iostream>
using namespace std;

int& addConst(int& x, int y){
    x = x + 200;
    y = y + 200;
    cout << "addConst함수에서 x,y를 출력한다." << '\n';
    cout << "&x = " << &x << " x = " << x << '\n';
    cout << "&y = " << &y << " y = " << y << '\n';
    return x;
}

int main(){
    int a = 100, b = 10;
    addConst(a,b) = 555; //addConst()가 리턴한 변수 x와 공유 x,a에 555저장
    cout << "main 함수에서 addConst(a,b) = 555일 때 a, b, c " << '\n';
    cout << "&a = " << &a << " a = " << a << '\n';
    cout << "&b = " << &b << " b = " << b << '\n';
    return 0;
}