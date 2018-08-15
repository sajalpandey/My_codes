#include<iostream>
using namespace std;

float area(float r);              //function overloading
int area(int l, int b);           //with same name but passed arguement are diffrent

int main()
{
	float r;
	cout<<"Enter radius\n";
	cin>>r;
	cout<<"area of circle with radius "<<r<<" is ="<<area(r)<<endl;
	int l,b;
	cout<<"Enter length and bredth of ractangle\n";
	cin>>l>>b;
	cout<<"area of ractangle with length "<<l<<" and "<<" bredth "<<b<<" is ="<<area(l,b)<<endl;
}

float area( float r)
{
	return(3.14*r*r);
}

int area(int l,int b)
{
	return(l*b);
}
