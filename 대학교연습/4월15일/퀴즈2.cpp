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
    //static멤버함수인데 non-static멤버함수로 접근할 수 없음
    // static double getSalary(){
    //     return salary;
    // }
};

int Employee::count = 0;

int main(){
    Employee e1("김철수");
    Employee e2;
    Employee e3("김철호" , 20000);

    int n = Employee::getCount();
    cout << "현재의 직원수=" << n << '\n';
    return 0;
}