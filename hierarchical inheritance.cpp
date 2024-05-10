#include<iostream>
using namespace std;
class item
{
	protected :
	            int ic,aqty;
	            string inm;
	            float p;
	public : 
	         void getitem();
		   void showitem();            
};
class sale : public item
{
	int sqty,bal;
	public : 
	         void getsale();
	         void showsale();
};
class purches : public item
{
	int pqty,bal;
	public : 
	         void getpurches();
	         void showpurches();
};
void item ::  getitem()
{
	cout<<"item_code : item_name : available_quantity : price "<<endl;
	cin>>ic>>inm>>aqty>>p;
	
}
void item ::  showitem()
{
	cout<<ic<<"\t"<<inm<<"\t"<<aqty<<"\t"<<p<<endl;
}
void sale ::  getsale()
{
	getitem();
	cout<<"sale_quantity : ";
	cin>>sqty;
	bal=aqty-sqty;

	
}
void sale ::  showsale()
{
	showitem();
	cout<<"sale_quantity : balance \n"<<endl;
	cout<<sqty<<"\t"<<bal<<endl;
}
void purches ::  getpurches()
{
	getitem();
	cout<<"purches_quantity : ";
	cin>>pqty;
	bal=aqty+pqty;
}
void purches ::  showpurches()
{
      showitem();
      cout<<"purches_quantity : balance \n"<<endl;
	cout<<pqty<<"\t"<<bal<<endl;
}
int main()
{
	
	char k;
	cout<<"(sale/purches) = ";
	cin>>k;
	if(k=='s'||k=='S')
	{
		sale obj;
		obj.getsale();
		cout<<"item_code : item_name : available_quantity : price\n "<<endl;
		obj.showsale();
	}
	else
	{
		purches obj;
		obj.getpurches();
		cout<<"item_code : item_name : available_quantity : price\n "<<endl;
		obj.showpurches();
	}
}
