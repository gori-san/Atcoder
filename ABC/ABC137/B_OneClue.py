k, x = map(int, input().split())
l = x - k + 1
r = x + k - 1
num_list = list(range(l, r+1))
str_list = [str(n) for n in num_list]
print(' '.join(str_list))
