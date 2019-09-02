x, y = map(float, input().split())
 
x = int(x)
 
if x == 1:
	print("Total: R %.2f" % (y * 4.0))
elif x == 2:
	print("Total: R %.2f" % (y * 4.5))
elif x == 3:
	print("Total: R %.2f" % (y * 5.0))
elif x == 4:
	print("Total: R %.2f" % (y * 2.0))
elif x == 5:
	print("Total: R %.2f" % (y * 1.5))
