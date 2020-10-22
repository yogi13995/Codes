import numpy as np

#putting all input values in arrays
A=np.array([1,-1,2])
N1= np.array([2,3,-2])
N2= np.array([1,2,-3])


#finding out the cross product of the N1 and N2 for the normal of the resultant plane
n=np.array(np.cross(N1,N2))


d=np.dot(A,n)


#printing the equation of the plane which goes from point A and perpendicular to the given plane's normal
print("{}x + {}y +{}z = {}".format(n[0],n[1],n[2],d))
