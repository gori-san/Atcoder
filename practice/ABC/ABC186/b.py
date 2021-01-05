import numpy as np

h, w = map(int, input().split())
a = []
for _ in range(h):
    a.append(list(map(int, input().split())))
min_value = np.min(a)
print(np.sum(a) - h*w*min_value)
