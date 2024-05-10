#include<iostream>
using namespace std;
class student
{
	int sid;
	string snm;
	public:void getstudent()
	{
		cout<<"sid,sname"<<endl;
		cin>>sid>>snm;
	}
	void showstudent()
	{
		cout<<sid<<"\t"<<snm<<endl;
	 } 
};
class marks : public student
{
	int s1,s2,s3,t;
	float p;
	public:void getmarks()
	{
		getstudent();
		cout<<"marks of 3 student : "<<endl;
		cin>>s1>>s2>>s3;
		t=s1+s2+s3;
		p=(float)t/3;
		
	}
	void showmarks()
	{ 
	      showstudent();
	     	cout<<" s1  :  s2  :  s3  :  t  :  p  "<<endl;
		cout<<s1<<"\t"<<s2<<"\t"<<s3<<"\t"<<t<<"\t"<<p<<endl;
		
	}
};
int main()
{
	marks obj;
	obj.getmarks();

	obj.showmarks();
}
