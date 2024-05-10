#include<iostream>
using namespace std;
class A
{
	protected : float a;
	public : void get()
	         {
	         	cout<<"a =  ";
	         	cin>>a;
		   }
};
class B
{
	protected : float b;
	public: void get()
	        {
	        	cout<<"b =  ";
	        	cin>>b;
		  }
};
class c : public A , public B
{
	float c;
	public : void show()
	         {
	         	c = a/b;
	         	cout<<"Result = "<<c;
		   }
};
int  main()
{
	c obj;
	obj.A :: get();
	obj.B :: get();
	obj.show();
}
