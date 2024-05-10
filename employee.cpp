#include<iostream>
using namespace std;
class emp
{
	string enm;
	int eid;
	float sal,hra;
	
	public:void setemp(string nm,int id,float s)
	       {
	       	enm=nm;
	       	eid=id;
	       	sal=s;
		 }
		 void showemp(float r)
		 {
		 	hra=sal*r/100;
		 	cout<<enm<<"\t"<<eid<<"\t"<<sal<<"\t"<<hra<<endl;
		 }
};
int main()
{
	emp obj;
	obj.setemp("Ram",123,15000);
	obj.showemp(14.5);
}
