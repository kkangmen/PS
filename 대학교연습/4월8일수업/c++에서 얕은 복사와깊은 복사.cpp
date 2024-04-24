#include <iostream>
using namespace std;

int main(){
    int* a = new int(3); //메모리 공간 할당
    int* b = new int(200);
    cout << "a의 주소(복사전) : " << a << '\n';
    cout << "b의 주소(복사전) : " << b << '\n';

    //a = b; // 얕은 복사(참조 복사) <- b의 주소를 a에 복사 즉 a는 b의 주소 200을 가리킨다.
    *a = *b; // 깊은 복사(값 복사)
    *b = 10;
    cout << "a의 주소(복사후) : " << a << '\n';
    cout << "b의 주소(복사후) : " << b << '\n';

    cout << "a의 값 : " << *a << '\n';
    cout << "b의 값 : " << *b << '\n';

    delete a;
    delete b;
}