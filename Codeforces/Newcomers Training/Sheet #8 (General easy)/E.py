# Enter your code here. Read input from STDIN. Print output to STDOUT
 
n = int(input())
arr = list(map(int, input().split()))
 
arr.sort(reverse=True)
 
mysum = 0
othersum = 0
count = 0
while mysum <= othersum:
    mysum = sum(arr[0:count+1])
    othersum = sum(arr[count+1:])
    count += 1
print(count)
