#include<iostream>
using namespace std;
int main()
{
	float n,fact=1;
	cout<<"enter a number";
	cin>>n;
	int a=n;
	if(n>0)
	{
		for(;n>0;n--)
		{
			fact=fact*n;
		}
		cout<<"factorial of "<<a<<" is "<<fact;
	}
	else
	cout<<"you have entered a wrong number";
}
