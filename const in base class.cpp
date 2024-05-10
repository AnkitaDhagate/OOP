#include<iostream>
using namespace std;
class sample1
{
	protected:int x,y,z;
	public:
		sample1(int v1,int v2)
		{
			x=v1;
			y=v2;
			z=x+y;
		}
		void show1()
		{
			cout<<x<<"\t"<<y<<"\t"<<z<<endl;
		}
};
class sample2 : public sample1
{
	float a,b;
	public :
		 sample2(int p,int q,float m):sample1(p,q)
		 {
		 	a=m;
		 }
		 void show2()
		 {
		 	b=a/z;
		 	show1();
		 	cout<<a<<"\t"<<b<<endl;
		 }
	
};
int main()
{
	sample2 obj(10,20,5.5);
	obj.show2();
}
