n, target = map(int, input().split())
array = list(map(int, input().split()))

def binary_search(array, target, start, end):
    while start <= end:
        mid = (start + end) // 2
        if array[mid] == target:
            return mid
        if array[mid] < target:
            start = mid + 1
        else:
            end = mid - 1
    return None

result = binary_search(array, target, 0, n-1)
if result == None:
    print("원소가 존재하지 않습니다.")
else:
    print(result)
