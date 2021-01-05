n = int(input())
set1 = set()
set2 = set()

for i in range(n):
    s = input()
    if s[0] == '!':
        set2.add(s[1:])
    else:
        set1.add(s)

intersection_set = set1 & set2

if len(intersection_set) == 0:
    print('satisfiable')
else:
    print(intersection_set.pop())
