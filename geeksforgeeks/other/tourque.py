import numpy as np

#putting the value of force and position vector into arrays
F= np.array([7,3,-5])
r= np.array([1,-1,1])


#finding out the tourque by cross product of f and r
t=np.array(np.cross(F,r))

print("tourque={}i + {}j +{}k ".format(t[0],t[1],t[2]))
