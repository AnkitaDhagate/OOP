#include<iostream>
using namespace std;
class complex
{
     int a,b;
     public : 
             complex()
		 {
		 	a=0;
		 	b=0;
		 }
             complex(int x,int y)
		 {
		     a=x;
		     b=y; 	
		 }	
		 complex(int x)
		 {
		 	a=x;
		 	b=0;
		 }
		
		 void show()
		 {
		 	cout<<"complex number is :  "<<a<<"+"<<b<<"i"<<endl;
		 } 
};
int main()
{
	complex c1(4,3);
	c1.show();
	complex c2(5);
	c2.show();
	complex c3;
	c3.show();
}
