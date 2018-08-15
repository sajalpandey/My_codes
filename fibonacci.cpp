#include<iostream>
using namespace std;
int main()
{
	int n,x=0,y=1,z,i;
	cout<<"Enter number of terms in a series\n";
	cin>>n;
	
	for(i=0;i<n-1;i++)
	{
		if(i<1)
		{
			cout<<x<<" "<<"";
	        cout<<y<<" "<<"";
	        continue;
		}
		z=x+y;
		cout<<z<<" "<<"";
		x=y;
		y=z;
	}
} 
