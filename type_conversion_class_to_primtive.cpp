#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		void setdata(int x,int y)
		{
			a=x;b=y;
		}	
		void showdata()
		{
			cout<<"a="<<a<<" b="<<b<<endl;
		}
		operator int()                    //using casting operator
		{
			return (a+b);
		}
};
int main()
{
	complex c1;
	c1.setdata(4,6);
	c1.showdata();
	int x;
	x=c1;
	cout<<"x="<<x<<endl;
}
