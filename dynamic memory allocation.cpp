#include<iostream>
using namespace std;
class test
{
	public:void show()
	       {
		     cout<<" Hello "<< this <<endl;
	       }
};
int main()
{
	test *obj;
	obj = new test();
	(*obj).show();
	cout<<obj;
	delete (obj);
}
