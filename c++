#include<iostream>
#include<stack>
#include<cctype>
#include<string>
using namespace std;
class stl
{
	private:
	string inputstr;
	string original;
	string rever;
	stack<char> stac;
	public:
	void input()
	{
	cout<<"enter the string ";
 getline(cin,inputstr);
	}
		void reversestr(){
		
		for(char c:inputstr)
		{
			if(isalpha(c))
			{
			stac.push(tolower(c));
			original += tolower(c);
			}
			}
			cout<<"original string is "<<original<<endl;
			}
	void show()
	{
	while(!(stac.empty()))
	{
	rever +=stac.top();
	stac.pop();
	}
	cout<<"revere string is "<<rever<<endl;
	
	}
	void check()
	{
	if(original==rever){
	cout<<"it is pallindrome ";
	}
	else
	{
	cout<<"is not pallindrome ";
	}
	}
	};
int main()
{
stl obj;
obj.input();
obj.reversestr();
obj.show();
obj.check();
return 0;
}
	
