from math import pi
def main():
	while True:
		D, V = map(int, input().split())
		if (D, V) == (0,0): break
		print(((D**3-(6*V)/pi))**(1/3.))# !!! not mine!, found after looking it up!
		
if __name__ == '__main__':
	main()