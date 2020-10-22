
def arrange(mat):
	a =[0,0,0]
	for i in range(0,2):
		for j in range(i+1,3):
			#print(mat[i][0])
			if mat[i][0] == 0:
				#print(mat[j][0])
				if mat[j][0] != 0:
					
					a[1] = mat[i]
					mat[i] = mat[j]
					mat[j] = a[1]
					break
	return mat

def echolan(mat):
	a = mat[0][0]
	if a == 0:
		a = 1
	b = mat[1][0]
	if b == 0:
		b =1
	c = mat[2][0]
	if c == 0:
		c = 1
	
	for j in range(0,4):
		mat[0][j] = mat[0][j]*b*c
	for j in range(0,4):
		mat[1][j] = mat[1][j]*a*c
	for j in range(0,4):
		mat[2][j] = mat[2][j]*a*b
	if mat[2][0] != 0:
		for j in range(0,4):
			mat[2][j] = mat[2][j] - mat[0][j]
	if mat[1][0] != 0:
		for j in range(0,4):
			mat[1][j] = mat[1][j] - mat[0][j]
	d = mat[1][1]
	e = mat[2][1]
	for j in range(0,4):
			mat[1][j] = mat[1][j]*e
			mat[2][j] = mat[2][j]*d
	for j in range(0,4):
			mat[2][j] = mat[2][j] - mat[1][j]
	return mat



def equ(mat):
	if mat[2][2] ==0 and mat[2][3] !=0:
		print(0)
	if mat[2][2] == 0 and mat[2][3] == 0:
		print(1)
	if mat[2][2] != 0 and mat[2][3] != 0:
		z = mat[2][3]/mat[2][2]
		if mat[1][1] != 0:
		    y =(mat[1][3]-(mat[1][2]*z))/mat[1][1]
		else:
		    y = 0
		if mat[0][0] != 0:
		    x = (mat[0][3]- (mat[0][1]*z)-(mat[0][2]*z))/mat[0][0]
		else:
		    x = 0
		print(x,y,z)
	
						
t = int(input())			 
for k in range(t):
	mat = [[float (j) for j in input().split()] for i in range(3)]
	a = arrange(mat)
	b = echolan(a)
	print(b)
	equ(b)

