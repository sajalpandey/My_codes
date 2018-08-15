#include<iostream>
using namespace std;


int HCF(int a, int b)
{
	int i;
	for(i=a<b?a:b;i>=1;i--)
	{
		if(a%i==0&&b%i==0)
		break;
	}
	if(i>1)
	return i;
	else
	return 1;
}

int LCM(int a,int b)
{
	int i;
	for(i=a>b?a:b;i<=a*b;i++)
	{
		if(i%a==0&&i%b==0)
		break;
	}
	if(i<(a*b))
	return i;
	else
	return(a*b);
}


int main()
{
	int a,b;
	cout<<"Enter two numbers";
	cin>>a>>b;
	cout<<"LCM of "<<a<<" and "<<b<<" is "<<LCM(a,b)<<endl;
	cout<<"HCF of "<<a<<" and "<<b<<" is "<<HCF(a,b)<<endl;	
}
