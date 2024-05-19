#include <iostream>
using namespace std;

class Stack{
private:
    int size;
    int tos;
    int* mem;
public:
    Stack(int size = 4){
        this->size = size;
        mem = new int[size];
        tos = -1;
    }
    ~Stack(){
        delete[] mem;
    }
    Stack& operator<< (int n);
    Stack& operator>> (int& n);
    bool operator!();
};
Stack& Stack::operator<<(int n){
    if (tos == size-1){
        return *this;
    }
    tos++;
    mem[tos] = n;
    return *this;
}
Stack& Stack::operator>>(int& n){
    if (tos == -1){
        return *this;
    }
    n = mem[tos];
    tos--;
    return *this;
}
bool Stack::operator!(){
    if (tos == -1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    Stack stack(10);
    stack << 1 << 2 << 3 << 4 << 5;
    while(true){
        if(!stack){
            break;
        }
        int x;
        stack >> x;
        cout << x << ' ';
    }
    
    cout << '\n';
    return 0;
}