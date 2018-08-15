#include<iostream>
using namespace std;
int main()
{
	try
	{
		cout<<"you are in try block"<<endl;
		throw 100.4;
		cout<<"will not printed"<<endl;
	}
	catch(int i)
	{
		cout<<"exception caught"<<" no is "<<i<<endl;
	}
	catch(double d)
	{
		cout<<"exception caught"<<" no is "<<d<<endl;
	}
}
