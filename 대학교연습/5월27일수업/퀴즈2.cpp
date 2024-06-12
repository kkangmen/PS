#include <iostream>
#include <vector>
using namespace std;

template <class T>
void printVector(vector<T> &v){
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    cout << '\n';
};

// ���������� �����ϴ� ����
// ��ü�� �����Ҷ� �״�� ī�Ǹ� �ϸ� �޸� ����
// �޸𸮸� �����ϱ� ���ؼ� �������� ��� + ��ü�� ���������ϸ� ����� ���� ���� ��ü�� �ݿ��� ���� �ʴ´�.
template <class T>
int getAverage(T &v){
    int sum = 0;
    for (int i = 0; i < v.size(); i++){
        sum += v[i];
    }

    return sum/v.size();
}

int main(){
    vector<int> v(5);
    cout << "������ 5�� �Է��ϼ���>>";
    for (int i = 0; i < 5; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    printVector(v);
    cout << "���= " << getAverage(v) << '\n';
}
