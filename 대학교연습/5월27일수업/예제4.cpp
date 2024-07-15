#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // vector<int>::iterator it;

    // auto 추가
    // auto 기능 : v.begin()의 타입을 자동으로 설정해준다.
    // it != v.end() : 포인터 it가 v.end()와 같으면 for문 탈출
    for (auto it = v.begin(); it != v.end(); it++)
    {
        int n = *it;
        n = n * 2;
        *it = n;
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ' ';
    }

    // for (int i = 0; i < v.size(); i++){
    //     cout << v[i] << ' ';
    // }

    cout << '\n';
}