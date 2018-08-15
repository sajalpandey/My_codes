#include<iostream>
using namespace std;
class item
{
	int x,y;
	public:
		void setdata(int p,int q)
		{
			x=p;y=q;
		}
		void showdata(){
			cout<<"x="<<x<<" y="<<y<<endl;
		}
		int getx()
		{
			return (x);
		}
		int gety()
		{
			return (y);
		}
};
class product
{
	int a,b;
	public:
		void showdata()
		{
			cout<<"a="<<a<<" b="<<b<<endl;
		}
		product(){}                //default constructor
		product(item i)           //constructor helps to convert class to class type
		{
			a=i.getx();
			b=i.gety();
		}
};

int main()
{
	item t1;
	t1.setdata(10,44);
	t1.showdata();
	product p1;
	p1=t1;              //p1.product(t1)
	p1.showdata();
}
