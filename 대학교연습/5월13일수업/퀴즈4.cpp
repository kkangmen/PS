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
    cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
    for (int i = 0; i < 5; i++){
        cin >> n;
        mStack.push(n);
    }
    cout << "스택 용량:" << mStack.capactiy() << ", 스택 크기:" << mstack.length() << '\n';
    cout << "스택의 모든 원소를 팝하여 출력한다>> ";
    while(mStack.length() != 0){
        cout << mStack.pop() << ' ';
    }
    cout << '\n' << "스택의 현재 크기 : " << mStack.length() << '\n';
    return 0;
}