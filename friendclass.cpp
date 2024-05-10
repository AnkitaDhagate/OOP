#include<iostream>
using namespace std;
class student
{
	int rno;
	string nm;
	public : void getstudent()
	         {
		         cout<<"Student Roll no : ";
			   cin>>rno;
			   cout<<"Student Name :  ";
			   cin>>nm; 
	         }
	         friend class marks;
};
class marks
{
	int s1,s2,s3,t;
	float per;
	public : void getmarks()
	        {
		       cout<<"Marks of subject 1 :   ";
		       cin>>s1;
		       cout<<"Marks of subject 2 :   ";
		       cin>>s2;
		       cout<<"Marks of subject 3 :   ";
		       cin>>s3;
	        }
	        void showresult(student obj)
	        {
	        	t=s1+s2+s3;
	        	per=(float)t/3;
	        	cout<<obj.rno<<"\t"<<obj.nm<<"\t"<<s1<<"\t"<<s2<<"\t"<<s3<<"\t"<<t<<"\t"<<per<<endl;
		  }
};
int main()
{
	student s;
	marks m;
	s.getstudent();
	m.getmarks();
	cout<<"Rollno   Name   sub1   sub2    sub3   Total   percentage"<<endl;
	m.showresult(s);
}
