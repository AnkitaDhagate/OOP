#include<iostream>
using namespace std;
class fibonacci
{
	int a,b,count,c;
	public:
		fibonacci()
		{
			a=0;
			b=1;
			count=0;
		}
		void show(int size)
		{
			if(size>0)
			{
				cout<<"Fibonacci Series "<<endl;
				cout<<a<<endl;
				count++;
				
				if(size>=2)
				{
				     cout<<b<<endl;
				     count++;
				     while(count<size)
				     {
				     	    c=b+a;
				     	    cout<<c<<endl;
				     	    count++;
				     	    a=b;
				     	    b=c;
				     }	
				}
			}
			else
			cout<<"size must be positive ";	
		}	
};

int main()
{
	fibonacci *obj;
	obj = new fibonacci();
	(*obj).show(10);
	delete obj;
}







