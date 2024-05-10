#include<iostream>
using namespace std;
class player
{
	private :
	         string nm;
		   float avg;
		   int rn,ig,nt;
		    
	public  :
               player()
		   {
                    nm=" ";
			  avg=0;
			  rn=ig=nt=0;		   	
		   }	
	         player(player &p)
	         {
	         	this->nm=p.nm;
	         	this->rn=p.rn;
	         	this->ig=p.ig;
	         	this->nt=p.nt;
	         	this->avg=p.avg;
		   }
		   void getdata()
		   {
		   	cout<<"Name :   "<<endl;
		   	cin>>nm;
		   	cout<<"Runs :   "<<endl;
		   	cin>>rn;
		   	cout<<"Innings :   "<<endl;
		   	cin>>ig;
		   	cout<<"not outs :   "<<endl;
		   	cin>>nt;
		   	avg=rn/(ig-nt);
		   }
	         void showdata()
	         {
	         	cout<<nm<<" "<<rn<<" "<<ig<<" "<<nt<<" "<<avg<<endl;
		   }
		   int grater(player p)
		   {
		   	if(this->avg>p.avg)
		   	{
		   	     return 1;	
			}
			else
			{
				return 0;
			}
		   }
	         
};

int main()
{
	player p[5];
	int i;
	for(i=0;i<=4;i++)
	p[i].getdata();
	cout<<"Name : Runs : Innings : not outs : avg"<<endl;
	player max(p[0]);
	for(i=0;i<=4;i++)	
	{
		p[i].showdata();
		if(p[i].grater(max))
		max=p[i];
	}
	max.showdata();
	
}
