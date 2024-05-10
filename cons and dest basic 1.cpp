#include<iostream>
using namespace std;
class sample
{
	int x;
	public:
		 sample()
		 {
		 	x=500;
		 }
		 ~sample()
		 {
		 	cout<<"x = "<<x<<endl;
		 }
		 
};
int main()
{
	sample obj;
}
