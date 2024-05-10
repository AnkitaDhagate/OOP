#include<iostream>
using namespace std;
class circle
{
	public :
		 float r,ca,c;
		 void getcircle()
		 {
		 	cout<<"Enter a radius :   "<<endl;
		 	cin>>r;
		 }
		 void showcircle()
		 {
		 	ca=3.14*r*r;
		 	c=2*3.14*r;
		 	cout<<r<<"\t"<<ca<<"\t"<<c<<endl;
		 }
};
class triangle : public circle
{
	public :float b,h,ta;
	        void gettriangle()
		 {
		 	cout<<"Enter base and height :   "<<endl;
		 	cin>>b>>h;
		 	
		 }
		 void showtriangle()
		 {
		 	ta=0.5*b*h;	
		 	cout<<b<<"\t"<<h<<"\t"<<ta<<endl;
		 }
	
};
class geometry : public triangle
{
	public:
		void get()
		{
			getcircle();
			gettriangle();
		}
		void show()
		{
			cout<<"r   :  ca    : c" <<endl;
			showcircle();
			cout<<"b   :   h    : ta"<<endl;
			showtriangle();
		}
};
int main()
{
	geometry obj;
	obj.get();
	obj.show();
}
