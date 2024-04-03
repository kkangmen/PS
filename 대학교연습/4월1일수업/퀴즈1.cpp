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
    cout << "�Է��Ϸ��� ������ ������? ";
    cin >> num;
    size = num;
    cout << size << "���� ������ �Է��Ͻÿ�. ";
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
    cout << "�����迭 ����" << s.getSize() << "���� ����մϴ�.";
    s.write();
    cout << "���� ū ���� " << s.big() << '\n';
    return 0;
}