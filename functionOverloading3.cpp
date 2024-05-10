#include<iostream>
using namespace std;
class demo
{
	string nm[5],tmp;
	float n[5],t;
	int i,j;
	public : void setdata(string p[])
	         {
	         	for(i=0;i<=4;i++)
	         	nm[i]=p[i];
		   }
		   void setdata(float x[])
	         {
	         	for(i=0;i<=4;i++)
	         	n[i]=x[i];
		   }
		   void showdata()
		   {
		   	for(i=0;i<=4;i++)
		   	{
		   	      for(j=i+1;j<=5;j++)
				   {
				         if(nm[i]>nm[j])
					   {
					   	tmp=nm[i];
					   	nm[i]=nm[j];
					   	nm[j]=tmp;
					   }
					   if(n[i]>n[j])
					   {
				            t=n[i];
						n[i]=n[j];
						n[j]=t;	   	
				         }  	
				   }	
			}
			
			for(j=0;j<=5;j++)
			cout<<nm[j]<<"\t"<<n[j]<<endl;
			
		   }
};
int main()
{
	string nm[5]={"arun","manish", "shiv"  ,"om" ,"yash"};
	float n[5]={   20   ,  30    ,  50.2   , 40  , 90.5};
	 
	demo obj;
	obj.setdata(nm);
	obj.setdata(n);	
	obj.showdata();
}
