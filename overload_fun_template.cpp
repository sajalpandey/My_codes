#include<iostream>
using namespace std;
template <class x>
void fun(x a)
{
	cout<<"you are inside fun(x a)"<<endl;
}
template <class x ,class y>
void fun(x a,y b)
{
	cout<<"you are inside fun(x a, y b)"<<endl;
}
int main()
{
	fun(10);
	fun(10,2.3);
}
