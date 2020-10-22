def count(b):
	table = [0 for i in range(b+1)]
	table[0] = 1
	for i in range(3, b+1):
		table[i] += table[i-3]
	
	for i in range(5, b+1):
		table[i] += table[i-5]
	
	for i in range(10, b+1):
		table[i] += table[i-10]
		
	return table[b]
		

		
t = int(input())
for i in range(t):
	n = int(input())
	print(count(n))
