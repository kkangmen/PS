#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

class Random{
public:
    static void seed();
    static int nextInt(int min, int max);
    static char nextAlphabet();
    static double nextDouble();
};

void Random::seed(){
    srand((unsigned)time(NULL));
}
int Random::nextInt(int min, int max){
    int a = 0;
    while(1){
        a = rand() % (max+1);
        if (a != 0){
            break;
        }
    }
    return a;
}
char Random::nextAlphabet(){
    char b = 0;
    while(1){
        b = rand() % 'z';
        if (b >= 'a' || 'A' <= b && b <= 'Z'){
            break;
        }
    }
    return b;
}
double Random::nextDouble(){
    double c = 0;
    double max = 32767;
    c = rand()/max;
    return c;
}
int main(){
    Random::seed();
    cout << "1���� 100���� ������ ���� 10���� ����մϴ�" << '\n';
    for (int i = 0; i < 10; i++){
        cout << Random::nextInt(1,100) << ' ';
    }
    cout << '\n';
    cout << "���ĺ��� �����ϰ� 10���� ����մϴ�" << '\n';
    for (int i = 0; i < 10; i++){
        cout << Random::nextAlphabet() << ' ';
    }
    cout << '\n';
    cout << "������ �Ǽ��� 10���� ����մϴ�" << '\n';
    for (int i = 0; i < 5; i++){
        cout << Random::nextDouble() << ' ';
    }
    for (int i = 0; i < 5; i++){
        cout << Random::nextDouble() << ' ';
    }
    cout << '\n';
    return 0;
}