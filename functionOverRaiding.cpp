#include<iostream>
using namespace std;
class staff
{
	protected :
		      int sid;
		      string snm;
	public :  
	         void setdata(int sid,string snm)	
		   {
		       this->sid=sid;
			 this->snm=snm;   	
		   }      
};
class student: public staff
{
                  string nm;
		      int t;
		      float p;
		      
	public :  
	         void setdata(string nm,int t,float p)	
		   {
			 this->nm=nm;
			 this->t=t;
			 this->p=p;   	
		   }  
		   void showdata()
		   {
		       cout<<sid<<"\t"<<snm<<"\t"<<nm<<"\t"<<t<<"\t"<<p<<endl;	
		   }    
};
int main()
{
	student obj;
	obj.staff :: setdata(1001,"Ankita");
	obj.student ::setdata("Vedika",490,54.0);
	obj.showdata();
	return 0;
}
