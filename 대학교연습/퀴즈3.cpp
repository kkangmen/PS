#include <iostream>
#include <string>

using namespace std;

class BankAccount{
private:
    int accountNumber;
    string owner;
    int balance;
public:
    void setOwner(string name) {owner = name;}
    void setBalance(int money) {balance = money;}
    void deposit(int add) {balance += add;}
    void print() {cout << "���� ���� " << balance << "�Դϴ�." << '\n';}
    void withdraw(int minus) {
        if (balance <= 0){
            cout << "�ܾ��� �����մϴ�." << '\n';
            exit(0); // ���α׷� Ż��
        }
        balance -= minus;
    }
};
int main(){
    BankAccount account;
    account.setOwner("��ö��");
    account.setBalance(0);
    account.deposit(0);
    account.print();
    account.withdraw(11000);
    account.print();
    return 0;
}