#include <iostream>
using namespace std;

class Power{
private:
    int kick;
    int punch;
public:
    Power (int kick, int punch){
        this->kick = kick;
        this->punch = punch;
    }
    
    bool operator!();
};

bool Power::operator!(){
    if (kick == 0 && punch == 0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    Power a(0,0), b(5,5);
    if(!a){
        cout << "a�� �Ŀ��� 0�̴�." << '\n';
    }
    else{
        cout << "a�� �Ŀ��� 0�� �ƴϴ�." << '\n';
    }
    if(!b){
        cout << "b�� �Ŀ��� 0�̴�." << '\n';
    }
    else{
        cout << "b�� �Ŀ��� 0�� �ƴϴ�." << '\n';
    }
    return 0;
}