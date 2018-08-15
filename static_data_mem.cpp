#include<iostream>
class Data
{
	public:
		int a;
		static int b;
};
int Data::b;
int main()
{
	Data d1,d2;
//	d1.a=10;
	d2.b=20;
	std::cout<<"b="<<d1.b<<std::endl;
	std::cout<<"a="<<d1.a;
}
