#include<iostream>
using namespace std;
class sample
{
	float a,b,c;
	public:void setsample(float ,float );
	       void showsample();
};
inline void sample::setsample(float x,float y)
{
	a=x;
	b=y;
}
inline void sample::showsample()
{
      	c=a/b;
      	cout<<"value of a :"<<a<<endl;
      	cout<<"value of b :"<<b<<endl;
      	cout<<"division : "<<c<<endl;
}
int main()
{
	sample obj;
	obj.setsample(150,25);
	obj.showsample();
}
