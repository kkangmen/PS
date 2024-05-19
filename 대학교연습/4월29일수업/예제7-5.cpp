#include <iostream>
using namespace std;

class Power{
private:
    int punch;
    int kick;
public:
    Power(int kick = 0, int punch = 0){
        this->kick = kick;
        this->punch = punch;
    }
    void show(){
        cout << "kick=" << kick << ',' << "punch=" << punch << '\n';
    }
    bool operator==(Power op2);
};

bool Power::operator==(Power op2){
    if (kick == op2.kick && punch == op2.punch){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    Power a(3,5), b(3,5);
    a.show();
    b.show();
    if (a == b){
        cout << "두 파워가 같다." << '\n';
    }
    else{
        cout << "두 파워가 같지 않다." << '\n';
    }
    return 0;
}