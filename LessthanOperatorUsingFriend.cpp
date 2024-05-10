#include<iostream>
using namespace std;
class student
{
	string snm;
	int t,p;
	public : 
	         void gets()
	         {
	         	cout<<"Name,total and percentage : ";
	         	cin>>snm>>t>>p;
		   }
		   void shows()
		   {
		   	cout<<snm<<"\t"<<t<<"\t"<<p<<endl;
		   }
		   int operator < (student s)
               {
	          if(this->t<s.t)
	          return 1;
	          else
	          return 0;
               }
		
};

int main()
{
	student n[5],tmp;
	int i,j;
	for(i=0;i<=4;i++)
      n[i].gets();
	for(i=0;i<=3;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(n[i]<n[j])
			{
				tmp=n[i];
				n[i]=n[j];
				n[j]=tmp;
				
			}
		}
	}
	for(i=0;i<=4;i++)
	n[i].shows();

}
