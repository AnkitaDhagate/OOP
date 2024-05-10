#include<iostream>
using namespace std;
int main()
{
	int n[5],i=0,s=0;
	char k;
	try
	{
		do
		{
			cout<<"Enter Integer =   ";
			cin>>n[i];
			s=s+n[i];
			i++;
			if(i>4) throw(i);
			cout<<"Add more (y/n)? ";
			cin>>k;
		}while(tolower(k)=='y');
		cout<<"sum = "<<s<<endl;
	}
	catch(int x)
	{
		cout<<"subscript out of range ";
	}
}
