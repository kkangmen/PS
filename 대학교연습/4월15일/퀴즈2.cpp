#include <iostream>
#include <string>
using namespace std;

class Employee{
    string name;
    double salary;
    static int count;
public:
    Employee(string name = "", double s = 0.0){
        this->name = name;
        s = salary;
        count++;
    }
    static int getCount(){
        return count;
    }
    ~Employee(){
        count--;
    }
    //static����Լ��ε� non-static����Լ��� ������ �� ����
    // static double getSalary(){
    //     return salary;
    // }
};

int Employee::count = 0;

int main(){
    Employee e1("��ö��");
    Employee e2;
    Employee e3("��öȣ" , 20000);

    int n = Employee::getCount();
    cout << "������ ������=" << n << '\n';
    return 0;
}