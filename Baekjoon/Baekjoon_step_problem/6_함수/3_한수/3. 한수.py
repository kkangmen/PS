'''
문제
 -어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오.
입력
 -첫째 줄에 1,000보다 작거나 같은 자연수 N이 주어진다.
출력
 -첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다.
예제 입력 1
 -110
예제 출력 1
 -99
예제 입력 2
 -1
예제 출력 2
 -1
예제 입력 3
 -210
예제 출력 3
 -105
예제 입력 4
 -1000
예제 출력 4
 -144
예제 입력 5
 -500
예제 출력 5
 -119
https://www.acmicpc.net//problem/1065
'''
def digit_list(input_num):
    ouput_list=[]
    while 1:
        if input_num==0: break
        ouput_list.append(input_num%10)
        input_num=int(input_num/10)
    return ouput_list

input_num=int(input())
count=0
for i in range(input_num):
    series_list=digit_list(i+1)
    digit_size=len(series_list)
    if digit_size==1: count+=1
    else:
        diff_num=series_list[0]-series_list[1]
        for j in range(digit_size-1):
            compare_diff=series_list[j]-series_list[j+1]
            if compare_diff!=diff_num: break
            elif j==digit_size-2: count+=1
print(count)