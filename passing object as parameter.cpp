#include<iostream>
using namespace std;
class person
{
	string nm,ct;
	int a;
	public: 
	       void getperson();
	       void showperson();
	       int greater(person);
};
inline void person :: getperson()
{
	cout<<"Name :  ";
	cin>>nm;
	cout<<"City :  ";
	cin>>ct;
	cout<<"Age :  ";
	cin>>a;
}
inline void person :: showperson()
{
	cout<<nm<<endl;
	cout<<ct<<endl;
	cout<<a<<endl;
	
}
inline int person :: greater(person x)
{
	if(a>x.a)
	
		return 1;
	
	else
	
		return 0;
	
}
int main()
{
	person p[5],tmp;
	int j,k;
	for(j=0;j<=4;j++)
	p[j].getperson();
	for(j=0;j<=3;j++)
	{
	       for(k=j+1;k<=4;k++)
          	 {
		      if(p[j].greater(p[k]))
		      {
		            tmp=p[j];
				p[j]=p[k];
				p[k]=tmp;	
			}
             
          	 }
	}
	
	for(j=0;j<=4;j++)
	p[j].showperson();
}

