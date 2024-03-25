#include <iostream>
#include <cstring>

using namespace std;

void checkalpha(char *str, int length){ // ���ĺ� ���ڸ� ���� �Լ�
    int alpha[26] = {0, }; // a~z���� ���ĺ� ���ڸ� �� �迭 ����
    for (int i = 0; i < length; i++){
        alpha[str[i]-97]++;
    }

    for (int i = 0; i < 26; i++){
        cout << static_cast<char>(i+97) << " (" << alpha[i] << ") :";
        for (int j = 0; j < alpha[i]; j++){
            cout << '*';
        }
        cout << '\n';
    }
}

int main(){
    char str[10000]; // ���ڿ� 10000 size �迭 ����
    int count = 0; // �� ���ĺ� ��

    cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << '\n';
    cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << '\n';
    cin.getline(str, 10000, ';');

    for (int i = 0; i < strlen(str); i++){
        str[i] = tolower(str[i]); // ��� ���ĺ��� �ҹ��ڷ� �ٲ�
    }

    for (int i = 0; i < strlen(str); i++){
        if (isalpha(str[i])){ // ���� ���ڿ� �� ���ĺ��̶�� ���ĺ� �� ����
            count++; 
        }
    }

    cout << "�� ���ĺ� �� " << count << '\n';
    cout << '\n';

    checkalpha(str, strlen(str)); // ���ĺ� ���� ���� �Լ� ȣ��
    return 0;
}