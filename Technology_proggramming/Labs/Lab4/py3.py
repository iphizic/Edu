import sys

X = [1,0.2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
Y = []
Z = []
result = []

for i in X:
	res = 6.85*pow(i,2)-1.52
	Y.append(res)
	if res<0:
		Z.append(pow(i,3)-0.62)
	else:
		Z.append(1/pow(i,2))
print("X:",X)
print("Y:",Y)
print("Z:",Z)

