a=False
b=False
c=False

while((a and b and c)==False):
	st=input("enter the string")
	for x in range(0,len(st)):
		if(st[x].isupper()):
			a=True
			
		elif(st[x].islower()):
			b=True
		elif(st[x].isnumeric()):
			c=True	
			
	if(a==False):
	 	print("you havnt entered uppercase")
	elif(b==False):
	 	print("you havnt entered lowercase")
	elif(c==False):
		print("you havnt entered number")
