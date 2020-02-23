def main():
	while True:
		nom, den = map(int, input().split())
		if nom == 0 and den == 0: break
		if nom >= den:
			md = nom%den
			dv = nom//den
			print(dv, '{} / {}'.format(md, den))
		else:
			print(0, '{} / {}'.format(nom, den))

if __name__ == '__main__':
	main()
