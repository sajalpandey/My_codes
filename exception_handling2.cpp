#include<iostream>
using namespace std;

void exhandler(int i)
{
	try{
		if(i)
		throw i;
	}
	catch(int i)
	{
		cout<<"exception caught"<<" no is :"<<i<<endl;
	}
}
int main()
{
	cout<<"Start"<<endl;
	exhandler(1);
	exhandler(4);
	exhandler(0);
	exhandler(18);
}
