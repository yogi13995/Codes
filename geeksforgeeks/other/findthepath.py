t = int(input())
def way(x,y,count):
        if count == 0 and y ==1:
            count = 1
        else:
            for j in range(x-1,-1,-1):
                for k in range(0,y-1,1):
                    if k==0:
                        count = count+1
                    if k==1:
                        count = count+j
                    if k>1:
                        count = way(j,k+1,count)
        return count
        
        
for i in range(t):
    m, n = [int(x) for x in input().split()]  
    count = 0
    w= way(m,n,count)
    print(w)
