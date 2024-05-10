#include<iostream>
using namespace std;
class A
{
	protected : float n1;
	public : void getA()
	         {
	         	cout<<"n1 = ";
	         	cin>>n1;
		   }
};
class B : virtual public A
{
	protected : float n2;
	public : void getB()
	         {
	         	cout<<"n2 = ";
	         	cin>>n2;
		   }
};
class C : virtual public A
{
	protected : float n3;
	public : void getC()
	         {
	         	cout<<"n3 = ";
	         	cin>>n3;
		   }
};
class D : public B , public C
{
	float x;
      public :void show()
	{
		x=(n1-n3)/n2;
	      cout<<"x= "<<x<<endl;
	}

};
int main()
{
	D obj;
	obj.getA();
	obj.getB();
	obj.getC();
	obj.show();
}

