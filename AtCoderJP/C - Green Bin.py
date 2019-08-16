import collections
 
N = int(input())
#read strings and sort each one alpha!
s = ["".join(sorted(input())) for i in range(N)]

# count every word occurences
c = collections.Counter(s)

cnt = 0
for i in set(s):
    n = c[i]
    # erase repititions
    cnt += n*(n-1)//2
print(cnt) 
