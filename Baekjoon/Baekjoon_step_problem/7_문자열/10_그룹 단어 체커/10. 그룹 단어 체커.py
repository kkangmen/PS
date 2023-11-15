'''
문제
 -그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.
단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.
입력
 -첫째 줄에 단어의 개수 N이 들어온다. N은 100보다 작거나 같은 자연수이다. 둘째 줄부터 N개의 줄에 단어가 들어온다. 단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.
출력
 -첫째 줄에 그룹 단어의 개수를 출력한다.
예제 입력 1
 -3
happy
new
year
예제 출력 1
 -3
예제 입력 2
 -4
aba
abab
abcabc
a
예제 출력 2
 -1
예제 입력 3
 -5
ab
aa
aca
ba
bb
예제 출력 3
 -4
예제 입력 4
 -2
yzyzy
zyzyz
예제 출력 4
 -0
예제 입력 5
 -1
z
예제 출력 5
 -1
https://www.acmicpc.net//problem/1316
'''

import sys
input=sys.stdin.readline
input_num=int(input())
count=0
ascii_a=ord("a")
ascii_z=ord("z")
for i in range(input_num):
    alpha_list=[0 for i in range(ascii_z-ascii_a+1)]
    input_str=input()
    input_str=input_str[:-1]
    for index, j in enumerate(input_str):
        str_ascii=ord(j)
        list_index=str_ascii-ascii_a
        if alpha_list[list_index]==0: alpha_list[list_index]=1
        elif chr(list_index+ascii_a)!=input_str[index-1]: break
        if index==len(input_str)-1: count+=1
print(count)