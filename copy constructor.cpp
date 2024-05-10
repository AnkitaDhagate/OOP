#include<iostream>
using namespace std;
class book
{
	string bnm,au;
	int bc,c;
	
	public : book() //default constructor
	{
		bnm=au="   ";
		bc=c=0;
	}
	void getbook();
	book(book &);
	void showbook();
	
};
book :: book(book &obj)
{
	bnm=obj.bnm;
	bc=obj.bc;
	au=obj.au;
	c=obj.c;
	
}
void book :: getbook()
{
	cout<<"bok name,book copy,author name,copy"<<endl;
	cin>>bnm>>bc>>au>>c;
}
void book :: showbook()
{
	cout<<bnm<<" "<<bc<<" "<<au<<" "<<c<<endl;
	
}
int main()
{
	book obj;
	obj.getbook();
	obj.showbook();
	book obj1(obj);
	obj.showbook();
}


