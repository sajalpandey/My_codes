#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number\n";
	cin>>n;
	if(n%2==0)
	{
		if(n>0)
		cout<<"Entered number is EVEN and Positive";
		else
		cout<<"Entered number is EVEN and negative";
	}
	else
	{
		if(n>0)
		cout<<"Entered number is ODD and Positive";
		else
		cout<<"Entered number is ODD and negative";
	}
		
}
