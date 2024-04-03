#include <iostream>

using namespace std;

class Sample{
private:
    int*p;
    int capacity;
    int size;
public:
    Sample(int n){
        capacity = n;
        p = new int[n];
    }
    void read();
    void write();
    int big();
    int getSize(){
        return size;
    }
    ~Sample(){
        delete []p;
    }
};
void Sample::read(){
    int num;
    cout << "입력하려는 정수의 개수는? ";
    cin >> num;
    size = num;
    cout << size << "개의 정수를 입력하시오. ";
    for (int i = 0; i < size; i++){
        cin >> p[i];
    }
}
void Sample::write(){
    for (int i = 0; i < size; i++){
        cout << p[i] << ' ';
    }
    cout << '\n';
}
int Sample::big(){
    int ans = p[0];
    for (int i = 1; i < size; i++){
        if (ans < p[i]){
            ans = p[i];
        }
    }
    return ans;
}
int main(){
    Sample s(10);
    s.read();
    cout << "동적배열 정수" << s.getSize() << "개를 출력합니다.";
    s.write();
    cout << "가장 큰 수는 " << s.big() << '\n';
    return 0;
}