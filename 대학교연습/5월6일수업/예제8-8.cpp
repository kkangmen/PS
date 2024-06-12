#include <iostream>
using namespace std;

class A{
public:
    A(){cout << "A ������\n";}
    ~A(){cout << "A �Ҹ���\n";}
};

class B : virtual public A{
public:
    B(){cout << "B ������\n";}
    ~B(){cout << "B �Ҹ���\n";}
};

class C : virtual public A{
public:
    C(){cout << "C ������\n";}
    ~C(){cout << "C �Ҹ���\n";}
};

class D : public B, C{
public:
    D(){cout << "D ������\n";}
    ~D(){cout << "D �Ҹ���\n";}
};

int main(){
    D d;

    return 0;
}