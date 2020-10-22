t=int(input())

for i in range(t):
	n=int(input())
	a=[int(n) for n in input().split()]
		
	count=0
		
	for j in range(n):
		#print(j)
		if j>0:
			for k in range(j):
				if (a[k]^a[j])==0:
					count=count+1
	print(count)
