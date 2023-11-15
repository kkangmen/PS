'''
문제
 -주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
입력
 -첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.
출력
 -주어진 수들 중 소수의 개수를 출력한다.
예제 입력 1
 -4
1 3 5 7
예제 출력 1
 -3
https://www.acmicpc.net//problem/1978
'''

import sys
input=sys.stdin.readline
input_num=int(input())
input_num_list=list(map(int,input().split()))
prime_num=[i+2 for i in range(1000)]
for i in prime_num:
    multiply=1
    while 1:
        multiply+=1
        if i*multiply>1002: break
        try: prime_num.remove(i*multiply)
        except ValueError: continue
count=0
for i in input_num_list:
    if i in prime_num: count+=1
print(count)