/*
문제
 -(A+B)%C는 ((A%C) + (B%C))%C 와 같을까?
(A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.
입력
 -첫째 줄에 A, B, C가 순서대로 주어진다. (2 ≤ A, B, C ≤ 10000)
출력
 -첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.
예제 입력 1
 -5 8 4
예제 출력 1
 -1
1
0
0
https://www.acmicpc.net//problem/10430
*/

#include <stdio.h>
int main(){
    int input_num[3], ouput_num[4], a, b, c;
    for(int i=0; i<3; i++) scanf("%d",&input_num[i]);
    a=input_num[0]; b=input_num[1]; c=input_num[2];
    ouput_num[0]=(a+b)%c;
    ouput_num[1]=(a%c+b%c)%c;
    ouput_num[2]=(a*b)%c;
    ouput_num[3]=((a%c)*(b%c))%c;
    for(int i=0; i<4; i++) printf("%d\n",ouput_num[i]);
}