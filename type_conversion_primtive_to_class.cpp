#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		complex(){
		}
		complex(int k){            //constructor helps to type conversion
			a=k;b=0;
		}
		void setdata(int x,int y)
		{
			a=x;b=y;
		}
		void showdata()
		{
			cout<<"a="<<a<<" b="<<b<<endl;
		}
};
int main()
{
	int x=6;
	cout<<"x="<<x<<endl;
	complex c1;
	c1=x;                   //c1.complex(x)
	c1.showdata();
}
