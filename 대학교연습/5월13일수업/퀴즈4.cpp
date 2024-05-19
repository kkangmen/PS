#include <iostream>
using namespace std;

class BaseArray{
    int capacity;
    int* mem;
protected:
    BaseArray(int capacity = 100);
    ~BaseArray();
    void put(int index, int val);
    int get(int index);
    int getCapaciy(){
        return capacity;
    }   
};

class MyStack: public BaseArray{
    int tos;
public:
    MyStack(int capacity);
    void push(int n);
    int pop();
    int capacity(){
        return getCapaciy();
    }
    int length();
};

int main(){
    int n;
    MyStack mstack(100);
    cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
    for (int i = 0; i < 5; i++){
        cin >> n;
        mStack.push(n);
    }
    cout << "���� �뷮:" << mStack.capactiy() << ", ���� ũ��:" << mstack.length() << '\n';
    cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
    while(mStack.length() != 0){
        cout << mStack.pop() << ' ';
    }
    cout << '\n' << "������ ���� ũ�� : " << mStack.length() << '\n';
    return 0;
}