'''
문제
 -알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.
입력
 -첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.
출력
 -첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
예제 입력 1
 -Mississipi
예제 출력 1
 -?
예제 입력 2
 -zZa
예제 출력 2
 -Z
예제 입력 3
 -z
예제 출력 3
 -Z
예제 입력 4
 -baaa
예제 출력 4
 -A
https://www.acmicpc.net//problem/1157
'''

input_word=input()
input_word=input_word.lower()
ascii_a=ord("a")
ascii_z=ord("z")
alpha_num=ascii_z-ascii_a+1
alpha_count_list=[0 for i in range(alpha_num)]
for i in input_word:
    alpha_index=ord(i)-ascii_a
    alpha_count_list[alpha_index]+=1
max_value=max(alpha_count_list)
max_list=list(filter(lambda x:alpha_count_list[x]==max_value, range(len(alpha_count_list))))
if len(max_list)==1:
    print(chr(max_list[0]+ascii_a).upper())
else: print("?")