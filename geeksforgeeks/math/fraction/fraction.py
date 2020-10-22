def fraction(x,count,c,flag2,limit,gofrac,i):
	if count == 0 and x == c[count]:
		limit = i
		
	if x == c[count]:
		gofrac = gofrac*10 + c[count]
		if count == limit-1:
		 	flag2  = 1
		 	print("{0}.({1})".format(n//d,gofrac))
		count = count + 1
		
	elif x != c[count]:
		count = 0
		gofrac =0
	
	return count,gofrac,limit,flag2
	

t = int(input())
for i in range(t):
	n = int(input())
	d = int(input())
	gofrac = 0
	c =[]
	a = ((n/d) - (n//d))*10
	c.append(int(a))
	a = a - int(a)
	i = 1
	limit = 0
	count = 0
	flag2 = 0
	while (a != 0 ):
		a = a*10
		c.append(int(a))
		count,gofrac,limit,flag2= fraction(c[i],count,c,flag2,limit,gofrac,i)
		a = a - int(a)
		i = i + 1 
		
	if flag2 == 0:
		print(n/d)
