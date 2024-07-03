#include <iostream>
using namespace std;

int main(){
    int *a = new int(3);
    int *b = new int(8);

    cout << "a의 주소 = " << a << '\n';
    cout << "b의 주소 = " << b << '\n';

    a = b; // 얕은 복사 (주소복사)
    //*a = *b;
    *b = 10;

    cout << "a의 주소 = " << a << '\n';
    cout << "b의 주소 = " << b << '\n';


    cout << *a << '\n';
    cout << *b << '\n';

    delete a;
    delete b;
    return 0;
}