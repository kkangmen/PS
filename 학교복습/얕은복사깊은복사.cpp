#include <iostream>
using namespace std;

int main(){
    int *a = new int(3);
    int *b = new int(8);

    cout << "a�� �ּ� = " << a << '\n';
    cout << "b�� �ּ� = " << b << '\n';

    a = b; // ���� ���� (�ּҺ���)
    //*a = *b;
    *b = 10;

    cout << "a�� �ּ� = " << a << '\n';
    cout << "b�� �ּ� = " << b << '\n';

    cout << *a << '\n';
    cout << *b << '\n';

    delete a;
    delete b;
    return 0;
}