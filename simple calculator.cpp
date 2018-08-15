#include<iostream>
using namespace std;
int main()
{
	while(1)
	{
	float a,b;
	cout<<"Enter two nos";
	cin>>a>>b;
	cout<<"Enter your choice"<<endl;
	cout<<"1: ADD two numbers"<<endl;
	cout<<"2: SUBSTRACT two numbers"<<endl;
	cout<<"3: MULTIPLY two numbers"<<endl;
	cout<<"4: DIVIDE two numbers"<<endl;
	cout<<"5: exit"<<endl;
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<a+b;
			break;
		case 2:
			cout<<a-b;
			break;
		case 3:
			cout<<a*b;
			break;
		case 4:
			cout<<a/b;
			break;
		case 5:
			exit(1);
		default:
			cout<<"entered a wrong choice";
			break;
	}
}}
