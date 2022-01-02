from bisect import bisect_left, bisect_right

n = int(input())
card = list(map(int, input().split()))
card.sort()

m = int(input())
how_much_card = list(map(int, input().split()))

for x in how_much_card:
    print(bisect_right(card, x) - bisect_left(card, x), end=' ')