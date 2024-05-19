#include <iostream>
using namespace std;

class BaseArray{
private:
    int capacity;
    int *mem;
protected:
    BaseArray(int capacity = 100){
        this->capacity = capacity;
    };
    ~BaseArray(){
        delete []mem;
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
        mem = new int[*start];
    }
    void deleteMem(){
        delete []mem;
    }
    void printarr(){
        for (int i = 0; i < 5; i++){
            cout << mem[i] << ' ';
        }
        cout << '\n';
    }
};

class MyStack : public BaseArray{
private:
    int tos = -1;
public:
    MyStack(int capacity):BaseArray(capacity){
        putCapacity(capacity);
        int *new_mem = new int[capacity];
        putMem(new_mem);
        delete []new_mem;
    }
    void push(int n){
        tos++;
        if (tos >= capacity()){
            putCapacity(capacity()*2);
            int *bigmem = new int[capacity()];
            for (int i = 0; i < tos; i++){
                bigmem[i] = get(i);
            }
            deleteMem();
            putMem(bigmem);
            delete []bigmem;
        }
        put(tos, n);
    }
    int pop(){
        if (tos < (capacity()/4)){
            putCapacity(capacity()/2);
            int *smallmem = new int[capacity()];
            for (int i = 0; i < tos; i++){
                smallmem[i] = get(i);
            }
            deleteMem();
            putMem(smallmem);
        }
        tos--;
        return get(tos+1);
    }
    int capacity(){
        return getCapacity();
    }
    int length(){
        return tos+1;
    }
    void print(){
        printarr();
    }
};

int main(){
    MyStack mStack(1);

    int n;
    cout << "���ÿ� ������ 5���� ������ �Է��϶�>>";
    for (int i = 0; i < 5; i++){
        cin >> n;
        mStack.push(n);
    }
    mStack.print();
    cout << "���� �뷮:" << mStack.capacity() << ", ���� ũ��:" << mStack.length() << '\n';
    cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
    while (mStack.length() > 0){
        int k = mStack.pop();
        cout << k << ' ';
    }
    cout << "\n���� �뷮:" << mStack.capacity() << ", ���� ũ��:" << mStack.length() << '\n';
}
