#include <iostream>
#include <string>

using namespace std;

class Integer{
private:
    int value;
public:
    Integer(int n){
        value = n;
    };
    Integer(string s){
        value = stoi(s);
    };
    int get(){
        return value;
    }
    void set(int a){
        value = a;
    }
    bool isEven(){
        if (value % 2 == 0){
            return true;
        }
        else {
            return false;
        }
    };
};

int main(){
    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    cout << n.get() << ' ';
    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven() << '\n';
    return 0;
}