'''
문제
 -N-Queen 문제는 크기가 N * N인 체스판 위에 퀸 N개를 서로 공격할 수 없게 놓는 문제이다.
N이 주어졌을 때, 퀸을 놓는 방법의 수를 구하는 프로그램을 작성하시오.
입력
 -첫째 줄에 N이 주어진다. (1 ≤ N < 15)
출력
 -첫째 줄에 퀸 N개를 서로 공격할 수 없게 놓는 경우의 수를 출력한다.
예제 입력 1
 -8
예제 출력 1
 -92
https://www.acmicpc.net//problem/9663
'''

def N_Queen(count,case,check_list):
    if count==input_num: case+=1
    else:
        for i in range(input_num):
            diagonal_index=[i+count,input_num+i-count-1]
            if check_list[0][i] and check_list[1][diagonal_index[0]] and check_list[2][diagonal_index[1]]: 
                check_list[0][i]=False
                check_list[1][diagonal_index[0]]=False
                check_list[2][diagonal_index[1]]=False
                case=N_Queen(count+1,case,check_list)
                check_list[0][i]=True
                check_list[1][diagonal_index[0]]=True
                check_list[2][diagonal_index[1]]=True
    return case

input_num=int(input())
check_list=[[True for _ in range(input_num)],[True for _ in range(2*input_num-1)],[True for _ in range(2*input_num-1)]]
print(N_Queen(0,0,check_list))