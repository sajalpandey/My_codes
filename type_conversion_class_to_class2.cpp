#include<iostream>
using namespace std;
class product
{
	int a,b;
	public:
		void showdata()
		{
			cout<<"a="<<a<<" b="<<b<<endl;
		}
		int geta(int x){
			 a=x;
		}
		int getb(int y){
			b=y;
		}
};
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
		operator product()         //using casting operator class to class type conversion
		{
			product p;
			p.geta(x);
			p.getb(y);
			return p;
		}
};


int main()
{
	item t1;
	t1.setdata(11,4);
	t1.showdata();
	product p1;
	p1=t1;              //p1.product(t1)
	p1.showdata();
}
