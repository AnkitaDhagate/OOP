#include<iostream>
using namespace std;
class item
{
	string nm;
	float p,t;
	int q;
	
	public : 
	        void getitem();
	        void showitem();
	        int operator > (item );
};
void item :: getitem()
{
	cout<<"Name : ";
	cin>>nm;
	cout<<"Price : ";
	cin>>p;
	cout<<"Quantity : ";
	cin>>q;
	t=p*q;
	
}
void item :: showitem()
{
	cout<<nm<<"\t"<<p<<"\t"<<q<<"\t"<<t<<endl;
	
}
int item :: operator > (item obj)
{
	if(t>obj.t)
	return 1;
	else 
	return 0;
}
int main()
{
	item obj[5],max;
	int i;
	for(i=0;i<=4;i++)
      obj[i].getitem();
	max=obj[0];
	for(i=0;i<=4;i++)
	{
		obj[i].showitem();
		if(obj[i]>max)
		max=obj[i];
	}
	max.showitem();
}
