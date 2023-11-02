#include<iostream>
using namespace std;
class Stacks1

{
    private:
    int a[100],n=100,top=-1;
    public:
    void pushoperation()
    {
        if(top>=n-1)
        {
            cout<<"stck overflow";
        }
        else{
            cout<<"enter the element";
        cin>>a[top];
            cout<<a[top];
            top++;
            
        }
    }void popoperation()
    {
        if(top==-1)
        {
            cout<<"stack under flow";
        }
        else 
        {
            top--;
            cout<<a[top];
            
        }

    }
    void gettop()
    {
        if(top==-1)
        {
            cout<<"it is a empty stack";
        }
        else{
            cout<<a[top];
        }
    }
    void empty()
    {
        if(top==-1)
        {
            cout<<"the stack is empty";
        }
        else{
            cout<<"it is not empty";
        }
    }
};
    int main()
    {
        Stacks1 obj;
        int no; int operator1;
        cout<<"enter the no of times";
        cin>>no;
        int i=0;
        while(i<5)
        {
        cout<<"enter the choice";
        cin>>operator1;
       switch(operator1)
       {
       case 1:
       
        
        obj.pushoperation();
        break;
       
       case 2:
       
        obj.popoperation(); 
        break;
         case 3:
        
        obj.gettop();
        break;
        case 4:
        
        obj.empty();
        break;
        
        
        }

      i++;
        }
        return 0;  }
