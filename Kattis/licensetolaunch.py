n = int(input())
arr = list(map(int, input().split()))

mn = arr[0]
p = 0
for i in range(n):
    if mn > arr[i]: 
        mn = arr[i]
        p = i 
print(p)