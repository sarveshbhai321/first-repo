a=int(input("enter the numner of elements you want to enter in the list"))
b=[]
add=0
reverse=[]
for x in range(0,a):
	element=int(input("enter the element of"))
	b.append(element)
	add=add+element
for x in range(0,a):
	print(b[x])
print(add)
avg=add/(a)
print(avg)

for x in range(0,a):
	reverse.append(b[a-x-1])
	
for x in range(0,a):
	print(reverse[x])
maximum=b[0]
minimum=b[0]
for x in range(0,a):

	if b[x]>maximum:
		maximum=b[x]
	if b[x]<minimum:
		minimum=b[x]
		
print("the minimum is",minimum,"the maximum number is",maximum)

