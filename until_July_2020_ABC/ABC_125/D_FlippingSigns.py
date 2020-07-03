N = int(input())
A = list(map(int, input().split()))

# if A[0] < 0:
#     if abs(A[0]) >= abs(A[1]):
#         A[0] = -A[0]
#         A[1] = -A[1]

# for i in range(1, N-1):
#     if A[i] < 0:
#         if A[i-1] < A[i+1]:
#             if abs(A[i]) >= abs(A[i-1]) or A[i-1] < 0:
#                 A[i-1] = -A[i-1]
#                 A[i] = -A[i]
#         else:
#             if abs(A[i]) >= abs(A[i+1]) or A[i+1] < 0:
#                 A[i+1] = -A[i+1]
#                 A[i] = -A[i]

cou = 0
min_abs = 10000000000
for i in range(N):
    if A[i] < 0:
        cou += 1
    min_abs = min(min_abs, abs(A[i]))
    A[i] = abs(A[i])

if cou % 2 == 0:
    print(sum(A))
else:
    print(sum(A)-2*min_abs)
