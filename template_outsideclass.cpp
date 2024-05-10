#include<iostream>
using namespace std;
template<class T>
class data
{
	int j,k;
	T n[5],tmp;
	public: 
	       void getdata();
	       void ascend();
	       void descend();
	       void showdata();
};
template<class T>
void data<T>::getdata()
{
	for(j=0;j<=4;j++)
	cin>>n[j];
}
template<class T>
void data<T>::ascend()
{
	for(j=0;j<=3;j++)
	{
		for(k=j+1;k<=4;k++)
		{
			if(n[j]>n[k])
			{
				tmp=n[j];
				n[j]=n[k];
				n[k]=tmp;
			}
		}
	}

}
template<class T>
void data<T>::descend()
{
	for(j=0;j<=3;j++)
	{
		for(k=j+1;k<=4;k++)
		{
			if(n[j]<n[k])
			{
				tmp=n[j];
				n[j]=n[k];
				n[k]=tmp;
			}
		}
	}
	
}
template<class T>
void data<T>::showdata()
{
	for(j=0;j<=4;j++)
	cout<<n[j]<<endl;
}
int main()
{
	data<string>obj1;
	data<int>obj2;
	cout<<"Name :  "<<endl;
	obj1.getdata();
	cout<<"Integer :  "<<endl;
	obj2.getdata();
	
	cout<<"Name :  "<<endl;
	obj1.showdata();
	cout<<"Integer :  "<<endl;
	obj2.showdata();
	
	cout<<"Ascending order :  "<<endl;
	obj1.ascend();
	obj2.ascend();
	
	cout<<"Name :  "<<endl;
	obj1.showdata();
	cout<<"Integer :  "<<endl;
	obj2.showdata();
	
	cout<<"Descending order :  "<<endl;
	obj1.descend();
	obj2.descend();
	
	cout<<"Name :  "<<endl;
	obj1.showdata();
	cout<<"Integer :  "<<endl;
	obj2.showdata();
}

