#include <iostream>
#include <vector>
using namespace std;

int main(){
    int i;
    vector<int> v(5); // iterator ���� ���� �̸� ����
    vector<int>::iterator it;

    int *pV = &v[0];
    cout << "������ 5�� �Է�: ";
    for (it = v.begin(); it != v.end(); it++){
        cin >> *it;
    }
    pV = &v[0];
    cout << "������ 5�� ���: ";
    for (it = v.begin(); it != v.end(); it++){
        cout << *it << ' ';
    }
    cout << '\n';
    return 0;
}