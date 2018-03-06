import sys

#pars = "1 2 3 4 5 6 7 8 900"
ints = []
pint=0

pars=input("Type numbers: ")

pars+=' '
for i in pars:
	if i==' ':
		ints.append(pint)
		pint=0
	else:
		if i=='0':
			pint*=10
		elif i=='1':
			pint*=10
			pint+=1
		elif i=='2':
			pint*=10
			pint+=2
		elif i=='3':
			pint*=10
			pint+=3
		elif i=='4':
			pint*=10
			pint+=4
		elif i=='5':
			pint*=10
			pint+=5
		elif i=='6':
			pint*=10
			pint+=6
		elif i=='7':
			pint*=10
			pint+=7
		elif i=='8':
			pint*=10
			pint+=8
		elif i=='9':
			pint*=10
			pint+=9
		else:
			print("error: invalid characters in string\n")

even=[]
odd=[]

for i in ints:
	if i%2==0:
		even.append(i)
	else:
		odd.append(i)
if len(even)>0:
	print("Even number:",even)
else:
	print("No even number!")
if len(odd)>0:
	print("Odd number:",odd)
else:
	print("No odd number!")

