import math

def time_limit(s,n):
    if s=="O(N)":
        n=n
    elif s=="O(N^2)":
        n=n**2
    elif s=="O(N^3)":
        n=n**3
    elif s=="O(2^N)":
        n=2**n
    elif s=="O(N!)":
        n=math.factorial(n)
    return n

c=int(input())
num=10**8
for i in range(c):
    s,n,t,l=input().split()
    n,t,l=int(n),int(t),int(l)
    n=time_limit(s,n)
    
    if n*t<=l*num:
        print("May Pass.")
    else:
        print("TLE!")
