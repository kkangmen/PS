#include <iostream>
using namespace std;

class Employee{
private:
    string name;
    double salary;
    static int count;
public:
    Employee(string s = " ", double salary = 0.0){
        count++;
    }
    static int getCount(){
        return count;
    }
    ~Employee(){
        count--;
    };
};
int Employee::count = 0;
int main(){
    Employee e1("±èÃ¶¼ö");
    Employee e2;
    Employee e3("±èÃ¶È£", 20000);

    int n = Employee::getCount();
    cout << "ÇöÀçÀÇ Á÷¿ø¼ö = " << n << '\n';
    return 0;
}