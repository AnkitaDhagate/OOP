#include<iostream>
using namespace std;
class employee
{
	string enm;
	int eno;
	float sal,da,hra,t,pf,net,dr,hr;
	public : 
	       employee(float dr,float hr)
             {
	       	(*this).dr=dr;
	      	(*this).hr=hr;
	       }
	       void getemp()
	       {
	       	cout<<"eno,ename,salary :   "<<endl;
	       	cin>>eno>>enm>>sal;
	       	
	       	da=sal*dr/100;
	       	hra=sal*hr/100;
	       	t=sal+da+hra;
	       	pf=sal*0.04;
	       	net=t-pf;
		 }
		 void showemp()
		 {
		 	cout<<eno<<" "<<enm<<" "<<sal<<" "<<da<<" "<<hra<<" "<<t<<" "<<pf<<" "<<net<<endl;
		 }
	      
};

int main()
{
	employee m(25,6.5);
	employee e(20,5);
	employee w(15,3.2);
	
	m.getemp();
	e.getemp();
	w.getemp();
	
	m.showemp();
	e.showemp();
	w.showemp();
	
}



