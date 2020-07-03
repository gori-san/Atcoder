import re

s = input()
table = str.maketrans({'A': 'a', 'T': 't', 'G': 'g', 'C': 'c'})
result = s.translate(table)
# print(result)
#s.replace("A", "a").replace("T", "t").replace("G", "g").replace("C", "c")
result = re.sub(r'[A-Z]', " ", result)
s_list = result.split()
m = 0
for ss in s_list:
    m = max(m, len(ss))
    # print(ss)

print(m)
