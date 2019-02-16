import sys
import math
def main():
    n = int(input())
    a = list(map(int,input().split()))

    ans = 1000000001
    for j in range(n-1):
        temp = math.gcd(a[j],a[j+1])
        ans = min(ans,temp)

    print(ans)