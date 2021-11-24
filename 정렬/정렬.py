# 선택 정렬
# array = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]
# li = []
# for i in range(len(array)):
#     min_idx = i
#     for j in range(i+1, len(array)):
#         if array[j] < array[min_idx]:
#             min_idx = j
#     array[min_idx], array[i] = array[i], array[min_idx]

# print(array)

array = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]
for i in range(len(array)):
    min_idx = i
    for j in range(i+1, len(array)):
        if array[j] < array[min_idx]:
            min_idx = j
    array[i], array[min_idx] = array[min_idx], array[i]
print(array)

# 삽입 정렬
# array = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]

# for i in range(1, len(array)):
#     for j in range(i, 0, -1):
#         if array[j] < array[j-1]:
#             array[j], array[j-1] = array[j-1], array[j]
#         else:
#             break
# print(array)

array = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]
for i in range(1, len(array)):
    for j in range(i, 0, -1):
        if array[j] < array[j-1]:
            array[j], array[j-1] = array[j-1], array[j]
        else:
            break

print(array)

# 퀵 정렬
# array = [5, 7, 9, 0, 3, 1, 6, 2, 4, 8]

# def quick_sort(array, start, end):
#     if start >= end:
#         return
#     pivot = start
#     left = start + 1
#     right = end
#     while left <= right:
#         while left <= end and array[left] <= array[pivot]:
#             left += 1
#         while right > start and array[right] >= array[pivot]:
#             right -= 1
#         if left > right:
#             array[pivot], array[right] = array[right], array[pivot]
#         else:
#             array[left], array[right] = array[right], array[left]
        
#     quick_sort(array, start, right-1)
#     quick_sort(array, right+1, end)

# quick_sort(array, 0, len(array)-1)
# print(array)

# def quick_sort2(array):
#     if len(array) <= 1:
#         return array
#     pivot = array[0]
#     tail = array[1:]

#     left_side = [x for x in tail if x < pivot]
#     right_side = [x for x in tail if x > pivot]

#     return quick_sort2(left_side) + [pivot] + quick_sort2(right_side)

# quick_sort2(array)
# print(array)

array = [5, 7, 9, 0, 3, 1, 6, 2, 4, 8]

def quick_sort(array, start, end):
    if start >= end:
        return
    pivot = start
    left = start + 1
    right = end
    while left <= right:
        while left <= end and array[left] < array[pivot]:
            left += 1
        while right > start and array[right] > array[pivot]:
            right -= 1
        if left > right:
            array[pivot], array[right] = array[right], array[pivot]
        else:
            array[left], array[right] = array[right], array[left]
    quick_sort(array, start, right-1)
    quick_sort(array, right+1, end)
quick_sort(array, 0, len(array)-1)
print(array)

def quick_sort2(array):
    if len(array) <= 1:
        return array
    pivot = array[0]
    tail = array[1:]
    left_array = [x for x in tail if x > pivot]
    right_array = [x for x in tail if x < pivot]
    return quick_sort2(left_array) + [pivot] + quick_sort2(right_array)

quick_sort2(array)
print(array)
# 계수 정렬
array = [7, 5, 9, 0, 3, 1, 6, 2, 9, 1, 4, 8, 0, 5, 2]
li = [0] * (max(array) + 1)

for x in array:
    li[x] += 1

for i in range(len(li)):
    for x in range(li[i]):
        print(i, end=' ')
