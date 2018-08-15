#include<iostream>
using namespace std;
class demo
{
	mutable int i;
	int j;
	public:
		void set(int c)const{
			i=c;                 // NO error bcz mutable can be modig=fied
		//	j=c;                //error
		}                        //bcz const mem fun can not modify the object that invokes
		void show() const
		{
			cout<<"i="<<i<<" j="<<j<<endl;
		}
};
int main()
{
	demo d1;
	d1.set(7);
	d1.show();
}
