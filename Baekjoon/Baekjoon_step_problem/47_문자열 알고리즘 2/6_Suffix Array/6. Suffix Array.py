'''
문제
 -Suffix Array란, 문자열 S가 있을 때 그 접미사들을 정렬해 놓은 배열이다. 예를 들어, 문자열 S=banana의 접미사는 아래와 같이 총 6개가 있다.



Suffix
i




banana
1


anana
2


nana
3


ana
4


na
5


a
6



이를 Suffix 순으로 정렬하면 아래와 같다.



Suffix
i




a
6


ana
4


anana
2


banana
1


na
5


nana
3



정렬된 i의 배열 [6,4,2,1,5,3]을 S의 Suffix Array라고 한다.
문자열 S의 LCP Array는 Suffix Array를 구한 다음, 각 Suffix마다 정렬된 상태에서 바로 이전 Suffix와의 LCP (Longest Common Prefix, 최장 공통 접두사)의 길이를 배열에 담은 것이다. 위의 예에서 LCP Array는 [x,1,3,0,0,2]가 된다.
길이가 50만보다 작거나 같은 문자열이 주어졌을 때, Suffix Array와 LCP Array를 구하는 프로그램을 작성하시오.
입력
 -첫째 줄에 알파벳 소문자로만 이루어진 문자열 S가 주어진다. S의 길이는 50만보다 작거나 같다.
출력
 -첫째 줄에는 Suffix Array를, 둘째 줄에는 LCP Array를 공백으로 구분하여 출력한다. LCP Array의 첫 값은 항상 'x'이다.
예제 입력 1
 -abracadabra

예제 출력 1
 -11 8 1 4 6 9 2 5 7 10 3
x 1 4 1 1 0 3 0 0 0 2

https://www.acmicpc.net//problem/9248
'''