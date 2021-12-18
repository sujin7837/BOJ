# nxm 크기의 2차원 배열
n, m = map(int, input().split())
arr = [[0]*m for _ in range(n)]

# 리스트에서 특정 값을 가지는 원소를 모두 제거하기
a = [1, 2, 3, 4, 5, 5, 5]
remove_set = {3,5}
result = [i for i in a if i not in remove_set]

# 문자열 연산
a = "String"
print(a*3)  # 문자열 여러번 출력
# StringStringString

a = "ABCDEF"
print(a[2:4])   # 문자열 슬라이싱
# CD

# 사전 자료형
a = dict()
a['홍길동'] = 97
a['이순신'] = 98

b = {
    '홍길동':97,
    '이순신':98
}

key_list = list(b.keys())

# 집합 자료형(중복 제거)
# 초기화 1
data = set([1, 1, 2, 3, 4, 4, 5])
# 초기화 2
data = {1, 1, 2, 3, 4, 4, 5}

# 집합 연산
a = set([1, 2, 3, 4, 5])
b = set([3, 4, 5, 6, 7])
# 합집합
s = a|b
# 교집합
s = a&b
# 차집합
s = a-b

# 기본 입력
# 5
# 78 95 34 2 56
n = int(input())
data = list(map(int, input().split()))

# 빠르게 입력 받기
import sys
data = sys.stdin.readline().rstrip()
# rstrip(): 입력 후 엔터가 줄 바꿈 기호로 입력되는 것을 고려하여 사용

# 기본 출력
a = 1
b = 1
print(a, b)
print(7, end=" ")
print(8, end=" ")

answer = 7
print("정답은 " + str(answer) + "입니다.")

# f-string: 중괄호 안에 변수명을 기입하여 간단히 문자열과 정수를 함께 넣을 수 있습니다.
answer = 7
print(f"정답은 {answer}입니다.")

# 조건문
x = 15
# style 1
if x>0 and x<20:
    print(x)

# style 2
if 0<x<20:
    print(x)

# 함수
def add(a, b):
    return a+b

add(7,3)
add(b = 3, a = 7)

# global 키워드: 함수 바깥에 선언된 변수를 바로 참조
a = 0
def func():
    global a    # 전역 변수를 참조하려면 global 키워드를 사용해주어야 함
    a+=1

array = [1, 2, 3, 4, 5]
def func():
    array = [3, 4, 5]
    array.append(6)
    print(array) 

func()  # [3, 4, 5, 6]
print(array)    # [1, 2, 3, 4, 5]

# 여러 개의 반환 값
def operator(a, b):
    add_var = a + b
    subtract_var = a - b
    multiply_var = a * b
    divide_var = a / b
    return add_var, subtract_var, multiply_var, divide_var

a, b, c, d = operator(7, 3)

# 람다 표현식: 함수를 한 줄에 작성 가능
# 예시 1
def add(a, b):
    return a+b
print(add(3, 7))
print((lambda a, b: a + b)(3, 7))

# 예시 2
array = [('홍길동', 50), ('이순신', 32), ('아무개', 74)]
def my_key(x):
    return x[1]
print(sorted(array, key=my_key))
print(sorted(array, key=lambda x:x[1]))

# 예시 3
list1 = [1, 2, 3, 4, 5]
list2 = [6, 7, 8, 9, 10]
result = map(lambda a, b: a+b, list1, list2) # a+b를 반환값으로 하여, list1과 list2에 적용함

# 자주 사용되는 내장 함수
# eval()
result = eval("(3+5)*7")
print(result)   # 56

# sorted()
result = sorted([9, 1, 8, 5, 4])    # [1, 4, 5, 8, 9]
reverse_result = sorted([9, 1, 8, 5, 4], reverse=True)  # [9, 8, 5, 4, 1]

# sorted() with key
array = [('홍길동', 35), ('이순신', 75), ('아무개', 50)]
result = sorted(array, key=lambda x:x[1], reverse=True) # [('이순신', 75), ('아무개', 50), ('홍길동', 35)]

# 순열과 조합
# 순열
from itertools import permutations, repeat
data = ['A', 'B', 'C']
result = list(permutations(data, 3))    # [('A', 'B', 'C'), ('A', 'C', 'B'), ('B', 'A', 'C'), ('B', 'C', 'A'), ('C', 'A', 'B'), ('C', 'B', 'A')]

# 조합
from itertools import combinations
data = ['A', 'B', 'C']
result = list(combinations(data, 2))    # [('A', 'B'), ('A', 'C'), ('B', 'C')]

# 중복 순열과 중복 조합
# 중복 순열
from itertools import product
data = ['A', 'B', 'C']
# 중복을 허용하여 2개를 뽑는 모든 순열 
result = list(product(data, repeat=2))  # [('A', 'A'), ('A', 'B'), ('A', 'C'), ('B', 'A'), ('B', 'B'), ('B', 'C'), ('C', 'A'), ('C', 'B'), ('C', 'C')]

# 중복 조합
from itertools import combinations_with_replacement
data = ['A', 'B', 'C']
# 중복을 허용하여 2개를 뽑는 모든 조합
result = list(combinations_with_replacement(data, 2))   # [('A', 'A'), ('A', 'B'), ('A', 'C'), ('B', 'B'), ('B', 'C'), ('C', 'C')]

# Counter: 리스트와 같은 반복 가능한(iterable) 객체가 주어졌을 때 내부의 원소가 몇 번씩 등장했는지를 알려줌
from collections import Counter
counter = Counter(['red', 'blue', 'red', 'green', 'blue', 'blue'])
print(counter['blue'])  # 'blue'가 등장한 횟수
print(counter['green']) # 'green'이 등장한 횟수
print(dict(counter)) # {'red': 2, 'blue': 3, 'green': 1}

# 최대공약수와 최소공배수
import math
# 최소 공배수(LCM)를 구하는 함수
def lcm(a, b):
    return a*b // math.gcd(a, b)

a = 21
b = 14

math.gcd(a, b)   # 7
lcm(a, b)   # 42