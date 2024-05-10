#include<iostream>
using namespace std;
class sample
{
	int x;
	public : 
	         void set(int x)
	         {
	         	this->x=x;
		   }
		   void operator - ()
		   {
		   	x=-x;
		   } 
		   void show()
		   {
		   	cout<<"x = "<<x<<endl;
		   }
};
int main()
{
	sample obj1,obj2;
	obj1.set(15);
	obj2.set(-100);
	obj1.show();
	obj2.show();
	-obj1;
	-obj2;
	obj1.show();
	obj2.show();
}
