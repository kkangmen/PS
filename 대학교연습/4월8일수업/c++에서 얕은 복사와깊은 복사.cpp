#include <iostream>
using namespace std;

int main(){
    int* a = new int(3); //�޸� ���� �Ҵ�
    int* b = new int(200);
    cout << "a�� �ּ�(������) : " << a << '\n';
    cout << "b�� �ּ�(������) : " << b << '\n';

    //a = b; // ���� ����(���� ����) <- b�� �ּҸ� a�� ���� �� a�� b�� �ּ� 200�� ����Ų��.
    *a = *b; // ���� ����(�� ����)
    *b = 10;
    cout << "a�� �ּ�(������) : " << a << '\n';
    cout << "b�� �ּ�(������) : " << b << '\n';

    cout << "a�� �� : " << *a << '\n';
    cout << "b�� �� : " << *b << '\n';

    delete a;
    delete b;
}