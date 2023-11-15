'''
문제
 -자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.
1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
고른 수열은 오름차순이어야 한다.
입력
 -첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)
출력
 -한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다. 중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.
수열은 사전 순으로 증가하는 순서로 출력해야 한다.
예제 입력 1
 -3 1
예제 출력 1
 -1
2
3
예제 입력 2
 -4 2
예제 출력 2
 -1 2
1 3
1 4
2 3
2 4
3 4
예제 입력 3
 -4 4
예제 출력 3
 -1 2 3 4
https://www.acmicpc.net//problem/15650
'''

def combination(count,present_num):
    if count==input_num_count:
        print(" ".join(list(map(str,num_list))))
    else:
        for i in range(present_num,input_num+1):
            num_list[count]=i
            if count==0 or num_list[count-1]<num_list[count]: 
                combination(count+1,i+1)
                num_list[count]=0

input_num, input_num_count=map(int,input().split())
num_list=[0 for _ in range(input_num_count)]
combination(0,1)