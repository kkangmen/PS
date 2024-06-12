#include <iostream>
using namespace std;

class Adder{
protected:
    int add(int a, int b){
        return a + b;
    }
};

class Subtracter{
protected:
    int subtract(int a, int b){
        return a - b;
    }
};

class Calculator : public Adder, Subtracter{
public:
    int calc(char op, int a, int b){
        int res = 0;
        switch (op)
        {
        case '+':
            res = add(a,b);
            break;
        case '-':
            res = subtract(a,b);
            break;
        }
        return res;
    }
};

int main(){
    Calculator handCalculator;
    cout << "2 + 4 = " << handCalculator.calc('+', 2, 4) << '\n';
    cout << "100 - 8 = " << handCalculator.calc('-', 100, 8) << '\n';
}