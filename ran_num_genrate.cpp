#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of random numbers\n ";
	cin>>n;
	while(n--)
	{
		int random;
		random=rand()%100 +1;
		cout<<random<<endl;
	}
	fflush(stdin);
}
