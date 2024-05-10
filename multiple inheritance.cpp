#include<iostream>
using namespace std;
class Member
{
	protected :
		     int mc;
		     string mn;
      public :   
	        void getMember();
		  void showMember();		     
};
class Book
{
	protected :
		     int bc,cp;
		     string bnm,au;
      public :
	        void getBook();
		  void showBook();		     
};
class Trans : public Member,public Book
{
	char tcode;
	int bal;
	public : void getTrans();
	         void showTrans();
};
void Member::getMember()
{
	cout<<"member code : member name  "<<endl;
	cin>>mc>>mn;
}
void Member::showMember()
{
	cout<<mc<<"\t"<<mn<<"\t";
}
void Book::getBook()
{
	cout<<"Book code  :  Book name  :  Author name  :  Book copies  :   "<<endl;
	cin>>bc>>bnm>>au>>cp;
}
void Book::showBook()
{
	cout<<bc<<"\t"<<bnm<<"\t"<<au<<"\t"<<cp<<"\t";
}
void Trans::getTrans()
{
	getMember();
	getBook();
	cout<<"Tcode(I/R) = ";
	cin>>tcode;
	if(tcode=='I' || tcode=='i')
	{
		bal=cp-1;
	}
	else
	{
		bal=cp+1;
	}
}
void Trans::showTrans()
{
	showMember();
	showBook();
	cout<<tcode<<"\t"<<bal<<endl;
}
int main()
{
	Trans tobj;
	tobj.getTrans();
	tobj.showTrans();
}
