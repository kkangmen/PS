#include <iostream>
#include <string>
using namespace std;

class Converter{
protected:
    double ratio;
    virtual double convert(double src) = 0;
    virtual string getSourceString() = 0;
    virtual sring getDestString() = 0;
public:
    Converter(double ratio){
        this->ratio = ratio;
    }
};

class WonToDollar : public Converter{
protected:
    double convert
    void run(){
        cout << "변환 결과 :" << 
    }
};

int main(){
    WonToDollar wd(1170);
    wd.run();
}