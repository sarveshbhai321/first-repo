x=int(input("enter the marks in "))
y=int(input("enter teh bmarks obtained in next subject"))
z=int(input("enter the marks obtained in another subject"))
avg=int((x+y+z)/3)
print("the average of the subjecty is",avg)
if(90<=avg<=100):
	print("O")
elif(80<=avg<=89):
	print("A")
elif(70<=avg<=79):
	print("B")
elif(60<=avg<=69):
	print("C")
elif(40<=avg<=59):
	print("D")
else:
	print("failed")
