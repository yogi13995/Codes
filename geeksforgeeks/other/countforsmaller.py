t=int(input())

for i in range(t):
	n=int(input())
	a=[int(n) for n in input().split()]
	x=int(input())
	count=0
	
	for j in range(n):
		if a[j]<=x:
			count=count+1
	
	print(count)
