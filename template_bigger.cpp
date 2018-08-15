#include<iostream>
using namespace std;
template <class x>               //keyword class to specify generic type in template
x bigger(x a,x b)                 // X is placeholder can be anything 
{
	return (a>b?a:b);
}
int main()
{
	cout<<bigger(4,9)<<endl;
	cout<<bigger(4.5,7.9)<<endl;
	cout<<bigger('h','f')<<endl;;
}
