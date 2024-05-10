#include<iostream>
using namespace std;
class salesperson
{
	protected :
		      int snum;
		      string snm;
		      float r;
      public    : 
	            void getperson();
			void showperson();		      
		      
};
class book:public salesperson
{
      int bc;
	string bnm,au;
	float p;
	public :void getbook();
	        void showbook();
	  	
};
void salesperson :: getperson()
{
	cout<<"snumber,sname,rate :  ";
	cin>>snum>>snm>>r;
}
void salesperson :: showperson()
{
	cout<<snum<<"\t"<<snm<<"\t"<<endl;
}
void book :: getbook()
{
	cout<<"bookcode,bookname,author,price :  ";
	cin>>bc>>bnm>>au>>p;
}
void book :: showbook()
{     
      showperson();
	cout<<bc<<"\t"<<bnm<<"\t"<<au<<"\t"<<p<<"\t"<<p*r/100<<endl;
}

int main()
{
	book bobj;
	bobj.getperson();
	bobj.getbook();
		
	bobj.showbook();	
	
	
	}
