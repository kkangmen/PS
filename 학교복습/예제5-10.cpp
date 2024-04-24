#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;

class Person{
private:
    char* name;
    int id;
public:
    Person(int id, const char* name);
    void show(){
        cout << id << ',' << name << '\n';
    }
    void changeName(const char* name){
        if (strlen(name) > strlen(this->name)){
            return;
        }
        strcpy(this->name, name);
    }
    ~Person();
};

Person::Person(int id, const char* name){
    this->id = id;
    int len = strlen(name);
    this->name = new char[len+1];
    strcpy(this->name, name);
}
Person::~Person(){
    if(name){
        delete []name;
    }
}
int main(){
    Person father(1, "Kitae");
    Person daughter(father);

    cout << "daughter ��ü ���� ���� ----" << '\n';
    father.show();
    daughter.show();

    daughter.changeName("Grace");
    cout << "daughter �̸��� Grace�� ������ �� ----" << '\n';
    father.show();
    daughter.show();

    return 0;
}