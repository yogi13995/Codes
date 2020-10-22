t=int(input())

for i in range(t):
	n=int(input())
	a=[int(n) for n in input().split()]
	
	sum=0
	for j in range(n):
		sum=sum+a[j]
	
	print(sum)
