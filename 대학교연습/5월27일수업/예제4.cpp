#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    //vector<int>::iterator it;

    // auto �߰�
    // auto ��� : v.begin()�� Ÿ���� �ڵ����� �������ش�.
    // it != v.end() : ������ it�� v.end()�� ������ for�� Ż��
    for (auto it = v.begin(); it != v.end(); it++){
        int n = *it;
        n = n*2;
        *it = n;
    }

    for (auto it = v.begin(); it != v.end(); it++){
        cout << *it << ' ';
    }

    // for (int i = 0; i < v.size(); i++){
    //     cout << v[i] << ' ';
    // }

    cout << '\n';
}