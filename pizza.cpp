#include<iostream>
using namespace std;
class orders1
{
private:
	int orders[10];
	int max=10;
	int front=-1;
	int rear=-1;
     public:
			void order()
			{
			int a;
			cout<<"enter the order number";
			cin>>a;
			if(rear=max-1)
			{
			cout<<"we are currently very buisy kindly order after some time";
			}
			else{
				if(front==-1)
				{
				front=0;
				   rear++;
					orders[rear]=a;
					}
			  }
			  }
  void serve()
  {
  if(front=-1||front>rear)
  {
  cout<<"open order anything";
  }
  else{
  cout<<"the first order is served";
  front++;
  }
  }
				void display()
				{
				for(int i=front;front<=rear;i++)
				{
				cout<<orders[i];
				}
				}
};
int main()
{
orders1 obj;

int b,n;
cout<<"enter the size of orders";
cin>>n;
for(int j=0;j<n;j++)
{
cout<<"please place your wish 1=order,2=served order,3=current order";
cin>>b;

switch(b)
{
case 1:
			obj.order();
			break;
case 2:
			obj.serve();
			break;
case 3:
			obj.display();
			break;
}
}
return 0;
}
        

  
