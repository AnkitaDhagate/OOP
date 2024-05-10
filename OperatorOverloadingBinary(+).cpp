#include<iostream>
using namespace std;
class salesperson
{
	string nm;
	int e,w,s,n,t;
	public : 
	        salesperson()
	        {
	        	nm=" ";
	        	e=w=s=n=0;
		  }
		  salesperson(string nm,int e,int w,int s,int n)
		  {
		  	this->nm=nm;
		  	this->e =e;
		  	this->w =w;
		  	this->s =s;
		  	this->n =n;
		  	t = this->e + this->w + this->s + this->n;
		      
		  }
		 salesperson operator + (salesperson x)
		 {
		 	salesperson obj;
			obj.nm=" ";
		 	obj.e=this->e+x.e;
		 	obj.w=this->w+x.w;
		 	obj.s=this->s+x.s;
		 	obj.n=this->n+x.n;
		 	obj.t=this->t+x.t;
		 	
		 	return (obj);
		 }
		  void show()
		  {
		  	cout<<nm<<"\t"<<e<<"\t"<<w<<"\t"<<s<<"\t"<<n<<"\t"<<endl;
		  }
};
int main()
{
	salesperson a("Vedika",200,40,1,380);
	salesperson b("Anagha",100,75,60,90);
	salesperson obj;
	a.show();
	b.show();
	obj = a + b;
	obj.show();
}
