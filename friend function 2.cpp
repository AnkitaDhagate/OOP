#include<iostream>
using namespace std;
class Bdiv
class Adiv
{
	float t,p;
	public : void setmark(float a,float b)
        	   {
		       t=a;
		       p=b;
	         }
	         void showmark()
	         {
	         	cout<<t<<"\t"<<p<<endl;
		   }
		   friend void totavg( Adiv , Bdiv );
};
class Bdiv
{
	flaot t,p;
	public: void setmark(float m,float n)
	        {
	        	t=m;
	        	p=n;
		  }
		  void showmark()
		  {
		  	
		  }
}
