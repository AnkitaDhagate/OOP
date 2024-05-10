#include<iostream>
using namespace std;
class sample
{
	int a;
	public:
		 seta(int x)
		 {
		 	a=x;
		 }
		 showa()
		 {
		 	cout<<"a = "<<a<<endl;
		 }
		 friend sample operator + (sample,sample);
};
sample operator + (sample x,sample y)
{
	sample obj;
	obj.a = x.a + y.a;
	return (obj);
}
int main()
{
	sample obj1,obj2,obj3;
	obj1.seta(100);
	obj2.seta(500);
	obj3=obj1+obj2;
	//obj3=operator + (obj1,obj2);
	obj1.showa();
	obj2.showa();
	obj3.showa();
}
