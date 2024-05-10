#include<iostream>
using namespace std;
template<class num>
int add_num(num a,num b)
{
	num c=a+b;
	return c;
}
int main()
{
	int a=150,b=29,c;
	float x=2.33,y=49.5,z;
	c=add_num(a,b);
	z=add_num(x,y);
	cout<<c<<"\t"<<z<<"\t"<<endl;
}
