//������ ���� ���� ���
#include <iostream>
using namespace std;

char& find(char s[], int index){
    return s[index]; // s[index] ������ ���� ����
}

int main(){
    char name[] = "Mike";
    cout << name << '\n';

    find(name,0) = 'S'; // find�� ������ ��ġ�� ���� 'M' ����
    cout << name << '\n';

    char& ref = find(name, 2); // ref�� name[2] ����
    ref = 't';
    cout << name << '\n';
    return 0;
}