#include <iostream>
using namespace std;
void max(int a,int b)
{
    int max=a>b?a:b;
    cout<<max;
}
void max(char ch1,char ch2)
{
    if(ch1>ch2)
     cout<<ch1;
    else 
     cout<<ch2;
}
void max(double d1,double d2)
{
    if(d1>d2)
     cout<<d1;
    else
     cout<<d2;
}
int main() {
    int t;
    cin>>t;
	while(t--)
	{
	    int choice,a,b;
	    char ch1,ch2;
	    double d1,d2;
	    cin>>choice;
	    switch(choice)
	    {
	        case 1:
	          cin>>a>>b;
	          max(a,b);
	          break;
	        case 2:
	          cin>>ch1>>ch2;
	          max(ch1,ch2);
	          break;
	       case 3:
	          cin>>d1>>d2;
	          max(d1,d2);
	          break;
	    }
	}
	return 0;
}
