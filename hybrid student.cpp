#include<iostream>
using namespace std;
class student
{
	protected : int id;
	            string snm;
	public : void getstudent()
	         {
	         	cout<<"student id = ";
	         	cin>>id;
	         	cout<<"student name = ";
	         	cin>>snm;
		   }
};
class theory : virtual public student
{
	protected : int t1,t2,t3;
	public : void gettheory()
	         {
	         	cout<<"t1 = ";
	         	cin>>t1;
	         	cout<<"t2 = ";
	         	cin>>t2;
	         	cout<<"t3 = ";
	         	cin>>t3;
		   }
};
class practical : virtual public student
{
	protected : int p1,p2;
	public : void getpractical()
	         {
	         	cout<<"p1 = ";
	         	cin>>p1;
	         	cout<<"p2 = ";
	         	cin>>p2;
		   }
};
class result : public theory , public practical
{
	float t,per;
      public :void showresult()
	{
		cout<<"id       snm    t1      t2      t3      p1      p2  "<<endl;
		cout<<id<<"\t"<<snm<<"\t"<<t1<<"\t"<<t2<<"\t"<<t3<<"\t"<<p1<<"\t"<<p2<<"\t"<<endl;
		
	      t=t1+t2+t3+p1+p2;
	      cout<<"Total = "<<t<<endl;
	      
	      per=t/5;
	      cout<<"Percentage = "<<per<<endl; 
	}

};
int main()
{
	result obj;
	obj.getstudent();
	obj.gettheory();
	obj.getpractical();
	obj.showresult();
}

