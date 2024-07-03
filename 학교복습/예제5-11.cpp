#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

class Person{
private:
    char* name;
    int id;
public:
    Person(int id, const char* name);
    Person(Person& person);
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

Person::Person(Person& person){
    this->id = person.id;
    int len = strlen(person.name);
    this->name = new char[len+1];
    strcpy(this->name, person.name);
    cout << "복사 생성자 실행. 원본 객체의 이름" << this->name << '\n';
}
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

    cout << "daughter 객체 생성 직후 ----" << '\n';
    father.show();
    daughter.show();

    daughter.changeName("Grace");
    cout << "daughter 이름을 Grace로 변경한 후 ----" << '\n';
    father.show();
    daughter.show();

    return 0;
}