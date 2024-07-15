#include <iostream>
#include <vector>
using namespace std;

template <class T>
void printVector(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';
};

// 참조변수로 전달하는 이유
// 객체를 전달할때 그대로 카피를 하면 메모리 낭비
// 메모리를 절약하기 위해서 참조변수 사용 + 객체를 복사전달하면 변경된 값이 기존 객체에 반영이 되질 않는다.
template <class T>
int getAverage(T &v)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }

    return sum / v.size();
}

int main()
{
    vector<int> v(5);
    cout << "정수를 5개 입력하세요>>";
    for (int i = 0; i < 5; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    printVector(v);
    cout << "평균= " << getAverage(v) << '\n';
}
