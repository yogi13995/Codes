t = int(input())
a = []
for i in range(0,t):
	n = int(input())
	clear.a()
	a = [int(i) for i in input().split()] 
	max = 0
	for j in range(len(a)):
		for k in range(0, j):
			x = j - k
			y = min(a[j], a[k])
			water = x*y
			if water > max:
				max = water 
			

	print(max)
	
