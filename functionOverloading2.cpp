#include<iostream>
using namespace std;
void sort(int num[])
{
	int j,k,tmp;
	for(j=0;j<=3;j++)
	{
		for(k=j+1;k<=4;k++)
		{
			if(num[j]>num[k])
			{
				tmp=num[j];
				num[j]=num[k];
				num[k]=tmp;
			}
		}
	}
}
void sort(string nm[])
{
	int j,k;
	string tmp;
	for(j=0;j<=3;j++)
	{
		for(k=j+1;k<=4;k++)
		{
			if(nm[j]>nm[k])
			{
				tmp=nm[j];
				nm[j]=nm[k];
				nm[k]=tmp;
			}
		}
	}
}
int main()
{
	int j;
	string nm[5]={"ram","omkar","manish","atharv","vaibhav"};
	int num[5]={ 1,2,3,4,5};
	cout<<"name\tnumber\n";
	for(j=0;j<=4;j++)
	cout<<nm[j]<<"\t"<<num[j];
	sort(nm);
	sort(num);
	cout<<"name\tnumber\n";
	for(j=0;j<=4;j++)
	cout<<nm[j]<<"\t"<<num[j];
}
