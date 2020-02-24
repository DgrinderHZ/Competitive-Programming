def main():
	arr = input().split()
	
	dic = {'A':0, '2':0, '3':0, '4':0, '5':0, '6':0, '7':0, '8':0, '9':0, 'T':0, 'J':0, 'Q':0, 'K':0}
	k = 0
	for i in range(5):
		dic[arr[i][0]] += 1
		if dic[arr[i][0]] > k:
			k = dic[arr[i][0]]
	print(k)

if __name__ == '__main__':
	main()