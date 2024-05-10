#include<iostream>
using namespace std;
template <class num>
class sample
{
	num x,y,z;
	public : 
	         void getdata()
	         {
	             cout<<"Enter x ,y =   ";
			 cin>>x>>y;	
		   }
		   void showdata()
		   {
		   	z=x/y;
		   	cout<<"z = "<<z<<endl;
		   }
};
int main()
{
	sample<int>obj1;
	sample<float>obj2;
	cout<<"floats = "<<endl;
	obj2.getdata();
	obj2.showdata();
	cout<<"Integer = "<<endl;
	obj1.getdata();
	obj1.showdata();
}
