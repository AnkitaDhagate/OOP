#include<iostream>
using namespace std;
class student
{
	public:char nm[20];
	       int p,c,m,t;
	       float per;
	public:void getstudent();
	       void calculate();
	       void showstudent();
	        
};
void student::getstudent()
{
	cout<<"Name :    ";
	cin>>nm;
	cout<<"marks of three subject :  ";
	cin>>p>>c>>m;
}
void student::calculate()
{
	t=p+c+m;
	per=(float)t/3;
}
void student::showstudent()
{

	calculate();
	cout<<nm<<"  "<<endl;
	cout<<p<<"  "<<endl;
	cout<<c<<"  "<<endl;
	cout<<m<<"  "<<endl;
	cout<<t<<"  "<<endl;
	cout<<per<<"  "<<endl;
}
int main()
{
	student s;
	s.getstudent();
	s.showstudent();
	
}
