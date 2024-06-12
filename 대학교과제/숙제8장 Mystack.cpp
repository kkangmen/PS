#include <iostream>
using namespace std;

class BaseArray{
private:
    int capacity;
    int *mem;
protected:
    BaseArray(int capacity = 100){
        this->capacity = capacity;
        mem = new int[capacity];
    };
    ~BaseArray(){
        delete[] mem;
    };
    void put(int index, int val){
        mem[index] = val;
    }
    int get(int index){
        return mem[index];
    }
    int getCapacity(){
        return capacity;
    }
    void putCapacity(int newCap){
        capacity = newCap;
    }
    int* getMem(void){
        return mem;
    }
    void putMem(int* start){
        mem = start;
    }
    void deleteMem(){
        delete []mem;
    }
};

class MyStack : public BaseArray{
private:
    int tos;
public:
    MyStack(int capacity):BaseArray(capacity){
        tos = -1;
    }
    void push(int n){
        if (tos + 1 >= getCapacity()){
            putCapacity(getCapacity()*2);
            int *bigmem = new int[capacity()];
            for (int i = 0; i <= tos; ++i){
                bigmem[i] = get(i);
            }
            deleteMem();
            putMem(bigmem);
        }
        put(++tos, n);
    }
    int pop(){
        if (tos < (capacity()/4)){
            putCapacity(capacity()/2);
            int *smallmem = new int[capacity()];
            for (int i = 0; i <= tos; ++i){
                smallmem[i] = get(i);
            }
            deleteMem();
            putMem(smallmem);
        }
        return get(tos--);
    }
    int capacity(){
        return getCapacity();
    }
    int length(){
        return tos+1;
    }
};

int main(){
    MyStack mStack(1);

    int n;
    cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
    for (int i = 0; i < 5; i++){
        cin >> n;
        mStack.push(n);
    }
    cout << "���� �뷮:" << mStack.capacity() << ", ���� ũ��:" << mStack.length() << '\n';
    cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
    while (mStack.length() > 0){
        int k = mStack.pop();
        cout << k << ' ';
    }
    cout << "\n���� �뷮:" << mStack.capacity() << ", ���� ũ��:" << mStack.length() << '\n';
}
