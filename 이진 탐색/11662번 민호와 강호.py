ax, ay, bx, by, cx, cy, dx, dy = list(map(int, input().split()))

def dinstance(m):
    m_x = ax * m + bx * (1 - m)
    m_y = ay * m + by * (1 - m)
    k_x = cx * m + dx * (1 - m)
    k_y = cy * m + dy * (1 - m)
    return ((m_x - k_x) ** 2 + (m_y - k_y) ** 2) ** 0.5

start, end = 0, 1
while abs(end - start) > 1e-9:
    one = (start * 2 + end) / 3
    two = (start + end * 2) / 3
    if dinstance(one) > dinstance(two):
        start = one
    else:
        end = two

print('%.16f'%dinstance(start))
