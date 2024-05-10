#include<iostream>
using namespace std;
class sample
{
	int c;
	public : void set(int a , int b)
	{
		c=a+b;
	}
	friend void div(float);
};
void div(float x)
{
	sample obj;
	obj.set(2,4);
	float y = obj.c/x;
	cout<<"y = "<<y<<endl;
}
int main()
{
	div(10);
}
