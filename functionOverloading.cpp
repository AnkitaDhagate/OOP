#include<iostream>
using namespace std;
float sum(float a,float b)
{
	return(a+b);
}
int sum(int x,int y)
{
	return(x+y);
}
int main()
{
	int p,q,r;
	float l,m,n;
	cout<<"Two integer =  ";
	cin>>p>>q;
	cout<<"Two float =  ";
	cin>>l>>m;
	r=sum(p,q);
	n=sum(l,m);
	cout<<"\tr = "<<r<<"\tn = "<<n;
}
