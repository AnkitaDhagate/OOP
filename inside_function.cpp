#include<iostream>
using namespace std;
class person
{
	private : string nm,ct;
	          int tel;
	public : void getdata();
	         void showdata();         
};
void getdata()
{
	cout<<"Name :  ";
	cin>>nm;
	cout<<"city :  ";
	cin>>ct;
	cout<<"tel no : ";
	cin>>tel;
	
}
