#include <iostream>
using namespace std;

class A{
public:
    A(){cout << "A 持失切\n";}
    ~A(){cout << "A 社瑚切\n";}
};

class B : virtual public A{
public:
    B(){cout << "B 持失切\n";}
    ~B(){cout << "B 社瑚切\n";}
};

class C : virtual public A{
public:
    C(){cout << "C 持失切\n";}
    ~C(){cout << "C 社瑚切\n";}
};

class D : public B, C{
public:
    D(){cout << "D 持失切\n";}
    ~D(){cout << "D 社瑚切\n";}
};

int main(){
    D d;

    return 0;
}