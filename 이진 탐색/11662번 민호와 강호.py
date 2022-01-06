def cal_distance(x1, x2, y1, y2):
    dif_x = (x1 - x2) ** 2
    dif_y = (y1 - y2) ** 2
    return (float)((dif_x + dif_y) ** 1/2)

def minho(x):
    return [ax + (bx - ax) * (x // 100), ay + (by - ay) * (x // 100)]

def kangho(x):
    return [cx + (dx - cx) * (x // 100), cy + (dy - cy) * (x // 100)]

ax, ay, bx, by, cx, cy, dx, dy = map(float, input().split())
lo, hi = 0, 100
min_dist = cal_distance(0, 10000, 0, 10000)

while hi - lo >= 1e-6:
    t1 = (lo * 2 + hi) // 3.0
    t2 = (lo + hi * 2) // 3.0

    m_dist1 = minho(t1)
    m_dist2 = minho(t2)
    k_dist1 = kangho(t1)
    k_dist2 = kangho(t2)
    print(m_dist1, m_dist2)
    print(k_dist1, k_dist2)
    dist1 = cal_distance(m_dist1[0], k_dist1[0], m_dist1[1], k_dist1[1])
    dist2 = cal_distance(m_dist2[0], k_dist2[0], m_dist2[1], k_dist2[1])
    min_dist = min(min_dist, min(dist1, dist2))

    if dist1 < dist2:
        lo = t1
        print(lo)
    else:
        hi = t2
        print(hi)
    
print(min_dist)