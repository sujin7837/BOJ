import sys

def binary_search(start, end, x):
    if start > end:
        print(0, end=' ')
    else:
        mid = (start + end) // 2
        if x == card[mid]:
            print(1, end=' ')
        elif x < card[mid]:
            binary_search(start, mid - 1, x)
        elif x > card[mid]:
            binary_search(mid + 1, end, x)

n = int(sys.stdin.readline())
card = list(map(int, sys.stdin.readline().split()))
card.sort()

m = int(input())
have_card = list(map(int, sys.stdin.readline().split()))

for x in have_card:
    binary_search(0, len(card) - 1, x)