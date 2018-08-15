#include<iostream>
using namespace std;
template <class x,class y>
void myfun(x a,y b)
{
	cout<<a<<endl<<b<<endl;
}

int main()
{
	myfun(10,"i love programming");
	myfun('g',10.6);
}
