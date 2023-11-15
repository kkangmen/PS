'''
문제
 -자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최솟값을 찾는 프로그램을 작성하시오.
예를 들어 M=60, N=100인 경우 60이상 100이하의 자연수 중 소수는 61, 67, 71, 73, 79, 83, 89, 97 총 8개가 있으므로, 이들 소수의 합은 620이고, 최솟값은 61이 된다.
입력
 -입력의 첫째 줄에 M이, 둘째 줄에 N이 주어진다.
M과 N은 10,000이하의 자연수이며, M은 N보다 작거나 같다.
출력
 -M이상 N이하의 자연수 중 소수인 것을 모두 찾아 첫째 줄에 그 합을, 둘째 줄에 그 중 최솟값을 출력한다. 
단, M이상 N이하의 자연수 중 소수가 없을 경우는 첫째 줄에 -1을 출력한다.
예제 입력 1
 -60
100
예제 출력 1
 -620
61
예제 입력 2
 -64
65
예제 출력 2
 --1
https://www.acmicpc.net//problem/2581
'''

import sys
input=sys.stdin.readline
start_num=int(input())
end_num=int(input())
prime_list=[True for i in range(end_num+1)]
prime_list[:2]=[False,False]
for i in range(end_num+1):
    if prime_list[i]==True:
        for j in range(2*i,end_num+1,i):
            prime_list[j]=False
prime_snm=0
for i in range(end_num,start_num-1,-1):
    if prime_list[i]==True:
        prime_snm+=i
        least_prime=i
if prime_snm>0:
    print(prime_snm)
    print(least_prime)
else: print(-1)

'''
import sys
input=sys.stdin.readline
start_num=int(input())
end_num=int(input())
prime_list=[i+2 for i in range(end_num-1)]
for i in prime_list:
    multiply=1
    while 1:
        multiply+=1
        if i*multiply>end_num: break
        try: prime_list.remove(i*multiply)
        except ValueError: continue
for i in range(start_num,end_num+1):
    try:
        start_prime_index=prime_list.index(i)
        break
    except ValueError:
        if i==end_num:
            print(-1)
            exit()
        continue
print(sum(prime_list[start_prime_index:]))
print(prime_list[start_prime_index])
'''