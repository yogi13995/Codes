
	

t = int(input())
for i in range(t):
	n = int(input())
	d = int(input())
	e = 0
	b = n
	N =1
	while(e ==0):
		e = b//d
		#print("a=",a)
		if e == 0:
			N = N*10
			b = b*10
	gofrac3 = int((n/d)*N)/N		
	count = 0
	c = []
	c.append(int(a*10)//d)
	a  = int(a*10)%d 
	i = 1
	gofrac = 0
	gofrac2 = 0
	flag2 = 0
	
	while (a != 0 ):
		#print("y")
		c.append(int(a*10)//d)
		a  = int(a*10)%d 
		gofrac2 = gofrac2*10 + c[i]
		if count == 0 and c[i] == c[count]:
			limit = i
		
		if c[i] == c[count]:
			gofrac = gofrac*10 + c[count]
			#print("A")
			if count == limit-1:
		 		flag2  = 1
		 		#print("B")
		 		print("{0}.({1})".format(n//d,gofrac))
		 		break
			count = count + 1
			
		
		elif c[i] != c[count]:
			count = 0
			gofrac =0
			
		i = i+1
			
	if flag2 == 0:
		print("{0}{1}".format(gofrac3,gofrac2))
