
while(True):
	a=str(input("enter the password "))
	for x in range(0,len(a)):
		if(a[x].isupper()):
			b=True
		elif(a[x].islower()):
			c=True	
		elif(a[x].isnumeric()):
			d=True	
		else:
			b=False
	if(len(a)<=8):
		print("please enter 8 characters in your password")

	elif(b==False):
		print("please enter one capital")
	elif(c==False):
		print("please enter  one small letter")
	elif(d==False):
		print("please enter one number")
	break
